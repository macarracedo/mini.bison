
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


%left '*' '/' '%' '+' FLECHA_IZDA FLECHA_DCHA '&' '@' '|' '<' '>' GE LE EQ NEQ AND OR
%right POTENCIA 
%nonassoc '-' '~' '!' TAMANO


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



r_cabecera : r_cabecera CABECERA r_rutas ';'              {printf("r_cabecera --> r_cabecera CABECERA r_rutas\n");}
  |                                                       {printf("r_cabecera --> \n");}
  ;

r_rutas : r_rutas ',' RUTA                                {printf("r_rutas --> r_rutas RUTA\n");}
  |RUTA                                                   {printf("r_rutas --> RUTA\n");}
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



l_ref : l_ref REF                                         {printf("l_decl_tipo --> TIPOS l_decl_tipo FIN");}
  |                                                       {printf("l_decl_tipo --> TIPOS l_decl_tipo FIN");}
  ;

tipo_basico : IDENTIFICADOR                               {printf("tipo_basico --> IDENTIFICADOR");}
  | tipo_escalar                                          {printf("tipo_basico --> tipo_escalar");}
  | tipo_enumerado                                        {printf("tipo_basico --> tipo_enumerado");}
  | tipo_estructurado                                     {printf("tipo_basico --> tipo_estructurado");}
  ;





/*****************************/
/* declaracion de constantes */
/*****************************/


  | declaracion_constante
  ;

declaracion_constante : IDENTIFICADOR 'es' tipo_basico '=' constante ';'
;

constante: CTC_ENTERA
| CTC_REAL
| CTC_CARACTER
| CTC_CADENA
| constante_enumerada
| constante_estructurada
;


 | elemento_hash
 ;  

elemento_hash : CTC_CADENA '->' constante
;


 | campo_constante
 ;

campo_constante : IDENTIFICADOR '=' constante
;


/****************************/
/* declaracion de variables */
/****************************/



  | IDENTIFICADOR
  ;



/****************************/
/* declaracion de funciones */
/****************************/


declaracion_funcion : 'funcion' IDENTIFICADOR '->' tipo_salida cuerpo_funcion
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
| 'nada'
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

bloque_instrucciones : 'principio' l_instruccion 'fin'

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


asignacion : expresion_indexada operador_asignacion expresion ;

operador_asignacion : '='
  | '=+'
  | '=-' 
  | '=*'
  | '=/' 
  | '=%' 
  | '=**' 
  | '=<-' 
  | '=->' 
  | '=&' 
  | '=@' 
  | '=|'
  ;


instruccion_bifurcacion : 'si' '(' expresion ')' accion a b
  'fin'


a : a otros_casos
  |
  ;

b : 'sino' accion
  |
  ;

otros_casos : 'si' 'encambio' '(' expresion ')' accion
  ;

accion : instruccion
  | bloque_instrucciones
  ;


instruccion_bucle : ’mientras’ ’(’ expresion ’)’ accion
  | ’hacer’ accion ’mientras’ ’( expresion ’)’ ’;’
  | ’para’ ’(’ ( asignacion )+ ’;’ expresion ’;’ ( asignacion ) + ’)’ accion
  | ’para’ ’cada’ IDENTIFICADOR ’(’ expresion ’)’ accion
  ;

instruccion_salto : 'saltar' IDENTIFICADOR ';'
| 'continuar' ';' 
| 'escape' ';'
ç
ç
;

instruccion_destino_salto : 'etiqueta' IDENTIFICADOR ';'
;

instruccion_devolver : 'devolver' [ expresion ]? ';'
;

instruccion_vacia : ';'
;

instruccion_lanzamiento_excepcion : 'lanza' 'excepcion' IDENTIFICADOR ';'
;

instruccion_captura_excepcion : 'ejecuta' bloque_instrucciones clausulas
;

clausulas : clausulas_excepcion c
  | clausula_defecto

  ;

c : clausula_defecto
  |
  ;
  

clausulas_excepcion : [ clausula_excepcion_especifica ]* clausula_excepcion_general
;

clausula_excepcion_especifica : 'excepcion' IDENTIFICADOR bloque_instrucciones
;

clausula_excepcion_general : 'otra' 'excepcion' bloque_instrucciones
;

clausula_defecto : 'defecto' bloque_instrucciones
;

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
  | '=+'
  | '=-' 
  | '=*'
  | '=/' 
  | '=%' 
  | '=**' 
  | '=<-' 
  | '=->' 
  | '=&' 
  | '=@' 
  | '=|'
  ;

instruccion_bifurcacion : 'si' '(' expresion ')' accion l_otros_casos 'fin'
  | 'si' '(' expresion ')' accion a 'sino' accion 'fin'
  ;

l_otros_casos : l_otros_casos otros_casos
  |
  ;


otros_casos : 'si' 'encambio' '(' expresion ')' accion
  ;

accion : instruccion
  | bloque_instrucciones
  ;

instruccion_bucle ::= 'mientras' '(' expresion ')' accion
  | 'hacer' accion 'mientras' '(' expresion ')' ';'
  | 'para' '(' l_asignaciones ';' expresion ';' l_asignaciones ')' accion
  | 'para' 'cada' IDENTIFICADOR '(' expresion ')' accion
  ;

l_asignaciones : l_asignaciones ',' asignacion
  | asignacion
  ; 

instruccion_salto : 'saltar' IDENTIFICADOR ';'
  | 'continuar' ';' 
  | 'escape' ';'
  ;

instruccion_destino_salto : 'etiqueta' IDENTIFICADOR ';'
;

instruccion_devolver : 'devolver' ';'
  | 'devolver' expresion ';'
  ;

instruccion_vacia : ';'
;

instruccion_lanzamiento_excepcion : 'lanza' 'excepcion' IDENTIFICADOR ';'
;

instruccion_captura_excepcion : 'ejecuta' bloque_instrucciones clausulas
;

clausulas : clausulas_excepcion 
  | clausulas_excepcion clausula_defecto
  ;

  
clausulas_excepcion : l_clausula_excepcion_especifica clausula_excepcion_general
;

l_clausula_excepcion_especifica : l_clausula_excepcion_especifica clausula_excepcion_especifica
  | 
  ;

clausula_excepcion_especifica : 'excepcion' IDENTIFICADOR bloque_instrucciones
;

clausula_excepcion_general : 'otra' 'excepcion' bloque_instrucciones
;

clausula_defecto : 'defecto' bloque_instrucciones
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
| '\' expresion_basica
;

indice : '[' expresion ']'
| '{' expresion '}'
;

expresion_funcional : IDENTIFICADOR '(' a ')'
|;
a : IDENTIFICADOR a ',' expresion
|expresion
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


expresion : expresion_logica
| expresion_logica 'si' expresion 'sino' expresion
;



    
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
