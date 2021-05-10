
%{
  
  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  int yyerror(char *);

%}

%union {
  int valor_entero;
  double valor_real;
  char * texto;
}




%token AND AND_ASIG ARRAY CABECERA CADA CADENA CARACTER CONJUNTO CONSTANTES CONTINUAR CTC_CADENA
%token CTC_CARACTER CTC_ENTERA CTC_REAL DE DEFECTO DIV_ASIG DEVOLVER EJECUTA ENCAMBIO ENTERO EQ ES
%token ESCAPE ESTRUCTURA ETIQUETA EXCEPCION FD_ASIG FI_ASIG FLECHA_DCHA FLECHA_IZDA FICHERO FIN
%token FUNCION HACER HASH GE IDENTIFICADOR INDIRECCION LANZA LE MIENTRAS MOD_ASIG MULT_ASIG NADA NEQ
%token OR OTRA OR_ASIG PARA POT_ASIG PRINCIPIO PROGRAMA POTENCIA REAL REF RESTA_ASIG RUTA SALTAR SI
%token SINO SUMA_ASIG TAMANO TIPOS UNION VARIABLES XOR_ASIG 



%%

/************/
/* programa */
/************/

programa : inicio_programa bloque_programa                {printf("programa --> inicio_programa bloque_programa\n");}
;


inicio_programa : PROGRAMA IDENTIFICADOR ';' l_cabecera   {printf("inicio_programa --> PROGRAMA IDENTIFICADOR ; librerias\n");}
  ;

l_cabecera : l_cabecera CABECERA l_rutas ';'              {printf("l_cabecera --> l_cabecera CABECERA l_rutas \n");}
  |                                                       {printf("l_cabecera --> \n");}
  ;

l_rutas : l_rutas ',' RUTA                                {printf("l_rutas --> l_rutas RUTA\n");}
  |RUTA                                                   {printf("l_rutas --> RUTA\n");}
  ;

bloque_programa :
    declaraciones_tipos                                   {printf("bloque_programa --> \n");}
    declaraciones_constantes                              {printf("bloque_programa --> \n");}
    declaraciones_variables                               {printf("bloque_programa --> \n");}
    declaracion_funcion                                   {printf("bloque_programa --> \n");}
    bloque_instrucciones                                  {printf("bloque_programa --> \n");}
    |error                                                {yyerror;}
    ;

/************************/
/* declaracion de tipos */
/************************/

declaraciones_tipos : TIPOS l_decl_tipo FIN               {printf("declaraciones_tipos --> TIPOS l_decl_tipo FIN\n");}
  |                                                       {printf("declaraciones_tipos --> TIPOS l_decl_tipo FIN\n");}
  ;

l_decl_tipo : l_decl_tipo declaracion_tipo                {printf("l_decl_tipo --> l_decl_tipo declaracion_tipo\n");}
  | declaracion_tipo                                      {printf("l_decl_tipo --> declaracion_tipo\n");}
  ;

declaracion_tipo : IDENTIFICADOR ES especificacion_tipo ';' {printf("declaracion_tipo --> TIPOS l_decl_tipo FIN\n");}
  ;

especificacion_tipo : l_ref tipo_basico                   {printf("especificacion_tipo --> TIPOS l_decl_tipo FIN\n");}
  ;

l_ref : l_ref REF                                         {printf("l_ref --> l_ref REF\n");}
  |                                                       {printf("l_ref --> \n");}
  ;

tipo_basico : IDENTIFICADOR                               {printf("tipo_basico --> IDENTIFICADOR\n");}
  | tipo_escalar                                          {printf("tipo_basico --> tipo_escalar\n");}
  | tipo_enumerado                                        {printf("tipo_basico --> tipo_enumerado\n");}
  | tipo_estructurado                                     {printf("tipo_basico --> tipo_estructurado\n");}
  ;


tipo_escalar : ENTERO                                     {printf("tipo_escalar --> ENTERO\n");}
  |REAL                                                   {printf("tipo_escalar --> REAL\n");}
  |CARACTER                                               {printf("tipo_escalar --> CARACTER\n");}
  |CADENA                                                 {printf("tipo_escalar --> CADENA\n");}
  |FICHERO                                                {printf("tipo_escalar --> FICHERO\n");}
  |EXCEPCION                                              {printf("tipo_escalar --> EXCEPCION\n");}
  ;

tipo_enumerado: ARRAY DE especificacion_tipo              {printf("tipo_enumerado --> ARRAY DE especificacion_tipo\n");}
| HASH DE especificacion_tipo                             {printf("tipo_enumerado --> HASH DE especificacion_tipo\n");}
| CONJUNTO DE especificacion_tipo                         {printf("tipo_enumerado --> CONJUNTO DE especificacion_tipo\n");}
;


tipo_estructurado : ESTRUCTURA PRINCIPIO tipo_estructurado linea_campo FIN   {printf("tipo_estructurado --> ESTRUCTURA PRINCIPIO tipo_estructurado linea_campo FIN\n");}
| ESTRUCTURA PRINCIPIO linea_campo FIN                                       {printf("tipo_estructurado --> ESTRUCTURA PRINCIPIO linea_campo FIN\n");}
| UNION PRINCIPIO tipo_estructurado linea_campo FIN                          {printf("tipo_estructurado --> UNION PRINCIPIO tipo_estructurado linea_campo FIN\n");}
| UNION PRINCIPIO linea_campo FIN                                            {printf("tipo_estructurado --> UNION PRINCIPIO linea_campos FIN\n");}
;

linea_campo : l_campo ES especificacion_tipo ';'          {printf("linea_campo --> EXCEPCION\n");}
  ;

l_campo : l_campo ',' IDENTIFICADOR                       {printf("l_campo --> l_campo ',' IDENTIFICADOR\n");}
  | IDENTIFICADOR                                         {printf("l_campo --> EXCEPCION\n");}
  ;


/*****************************/
/* declaracion de constantes */
/*****************************/

declaraciones_constantes : CONSTANTES l_declaraciones_constantes FIN
;

l_declaraciones_constantes : l_declaraciones_constantes declaracion_constante
  | declaracion_constante
  ;

declaracion_constante : IDENTIFICADOR ES tipo_basico '=' constante ';'
;

constante: CTC_ENTERA
| CTC_REAL
| CTC_CARACTER
| CTC_CADENA
| constante_enumerada
| constante_estructurada
;

constante_enumerada : '(' l_constante ')'
| '(' l_elemento_hash ')'
;

l_constante : rep_constante
 |
 ;
rep_constante : rep_constante ',' constante
 | constante
 ;

l_elemento_hash : rep_elemento_hash
 |
 ;
rep_elemento_hash : rep_elemento_hash ',' elemento_hash
 | elemento_hash
 ;  

elemento_hash : CTC_CADENA '->' constante
;

constante_estructurada : '{' l_campo_constante '}'

l_campo_constante : l_campo_constante ',' campo_constante
 | campo_constante
 ;

campo_constante : IDENTIFICADOR '=' constante
;


/****************************/
/* declaracion de variables */
/****************************/


declaraciones_variables : VARIABLES l_declaracion FIN

l_declaracion: l_declaracion declaracion_variables
  | declaracion_variables
  ;

declaracion_variables : l_ident ':' especificacion_tipo ';'
  | l_ident ':' especificacion_tipo  '=' l_expr ';'
  ;

l_expr :  l_expr ',' expresion
  | expresion
  ;

l_ident : l_ident ',' IDENTIFICADOR
  | IDENTIFICADOR
  ;



/****************************/
/* declaracion de funciones */
/****************************/


declaracion_funcion : FUNCION IDENTIFICADOR '->' tipo_salida cuerpo_funcion
 | 'funcion' IDENTIFICADOR lista_parametros '->' tipo_salida cuerpo_funcion
 ;

lista_parametros : '(' l_parametros parametros ')'

l_parametros : l_parametros parametros ';'
 | 
 ;

parametros : rep_ident ':' especificacion_tipo 
 | rep_ident ':' especificacion_tipo '=' l_expr_constante
 ;

rep_ident : rep_ident ',' IDENTIFICADOR
 | IDENTIFICADOR
 ;

l_expr_constante : l_expr_constante ',' expresion_constante
 | expresion_constante
 ;

tipo_salida : especificacion_tipo 
| NADA
;

cuerpo_funcion: declaraciones_constantes
 | declaraciones_variables
 | rep_declaracion_funcion
 | bloque_instrucciones
 ;

declaraciones_constantes :  
 | declaraciones_constantes
 ;

declaraciones_variables : 
 | declaraciones_variables
 ;

rep_declaracion_funcion : rep_declaracion_funcion declaracion_funcion
 | 
 ;

bloque_instrucciones : PRINCIPIO l_instruccion FIN

l_instruccion :  l_instruccion instruccion
 | instruccion
 ;

/*****************/
/* instrucciones */
/*****************/
instruccion : instruccion_expresion
  | instruccion_bifurcacion
  | instruccion_bucle
  | instruccion_salto
  | instruccion_destino_salto
  | instruccion_devolver
  | instruccion_vacia
  | instruccion_lanzamiento_excepcion
  | instruccion_captura_excepcion
  ;

instruccion_expresion : expresion_funcional ';'
  | asignacion ';'
  ;

asignacion : expresion_indexada operador_asignacion expresion 
;

operador_asignacion : '='
  | SUMA_ASIG
  | RESTA_ASIG 
  | MULT_ASIG
  | DIV_ASIG 
  | MOD_ASIG 
  | POT_ASIG 
  | FI_ASIG 
  | FD_ASIG 
  | AND_ASIG 
  | XOR_ASIG 
  | OR_ASIG
  ;

instruccion_bifurcacion : SI '(' expresion ')' accion l_otros_casos FIN
  | SI '(' expresion ')' accion l_otros_casos SINO accion FIN
  ;

l_otros_casos : l_otros_casos otros_casos
  |
  ;


otros_casos : SI ENCAMBIO '(' expresion ')' accion
  ;

accion : instruccion
  | bloque_instrucciones
  ;

instruccion_bucle: MIENTRAS '(' expresion ')' accion
  | HACER accion MIENTRAS '(' expresion ')' ';'
  | PARA '(' l_asignaciones ';' expresion ';' l_asignaciones ')' accion
  | PARA CADA IDENTIFICADOR '(' expresion ')' accion
  ;

l_asignaciones : l_asignaciones ',' asignacion
  | asignacion
  ; 

instruccion_salto : SALTAR IDENTIFICADOR ';'
  | CONTINUAR ';' 
  | ESCAPE ';'
  ;

instruccion_destino_salto : ETIQUETA IDENTIFICADOR ';'
;

instruccion_devolver : DEVOLVER ';'
  | DEVOLVER expresion ';'
  ;

instruccion_vacia : ';'
;

instruccion_lanzamiento_excepcion : LANZA EXCEPCION IDENTIFICADOR ';'
;

instruccion_captura_excepcion : EJECUTA bloque_instrucciones clausulas
;

clausulas : clausulas_excepcion 
  | clausulas_excepcion clausula_defecto
  ;

  
clausulas_excepcion : l_clausula_excepcion_especifica clausula_excepcion_general
;

l_clausula_excepcion_especifica : l_clausula_excepcion_especifica clausula_excepcion_especifica
  | 
  ;

clausula_excepcion_especifica : EXCEPCION IDENTIFICADOR bloque_instrucciones
;

clausula_excepcion_general : OTRA EXCEPCION bloque_instrucciones
;

clausula_defecto : DEFECTO bloque_instrucciones
;

/***************/
/* expresiones */
/***************/

expresion_constante : CTC_ENTERA
| CTC_REAL
| CTC_CADENA
| CTC_CARACTER
;

expresion_indexada : expresion_basica
| expresion_indexada '.' expresion_basica
| expresion_indexada '^.' expresion_basica
| expresion_indexada indice
| expresion_indexada '^.' indice
;

expresion_basica : IDENTIFICADOR
| '(' expresion ')'
| '^' expresion_basica
| '\\' expresion_basica
;

indice : '[' expresion ']'
| '{' expresion '}'
;

expresion_funcional : IDENTIFICADOR '(' l_expresion ')'
|;

l_expresion : l_expresiones 
|
; 

l_expresiones : l_expresiones ',' expresion
 | expresion
 ;

operador : operador_binario
| operador_unario
;

operador_binario: '&'
| '@'
| '|'
| POTENCIA
| '+'
| FLECHA_IZDA
| FLECHA_DCHA
| AND
| OR
| LE
| GE
| EQ
| NEQ
| '>'
| '<'
;

operador_unario: '-'
| '~'
| '!'
| TAMANO
;


expresion : expresion_logica op_exp
;

op_exp : SI expresion SINO expresion
  |
  ;

expresion_logica : ;


    
%%

int yyerror(char *s) {
  fflush(stdout);
  printf("*****************, %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./mini NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
