
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

declaraciones_constantes : CONSTANTES l_declaraciones_constantes FIN          {printf("declaraciones_constantes : CONSTANTES l_declaraciones_constantes FIN\n");}
;

l_declaraciones_constantes : l_declaraciones_constantes declaracion_constante {printf("l_declaraciones_constantes : l_declaraciones_constantes declaracion_constante\n");}
  | declaracion_constante                                                     {printf("l_declaraciones_constantes : declaracion_constante\n");}
  ;

declaracion_constante : IDENTIFICADOR ES tipo_basico '=' constante ';'        {printf("declaracion_constante : IDENTIFICADOR ES tipo_basico '=' constante ';'\n");}
;

constante: CTC_ENTERA                                     {printf("constante: CTC_ENTERA\n");}
| CTC_REAL                                                {printf("constante: CTC_REAL\n");}
| CTC_CARACTER                                            {printf("constante: CTC_CARACTER\n");}
| CTC_CADENA                                              {printf("constante: CTC_CADENA\n");}
| constante_enumerada                                     {printf("constante: constante_enumerada\n");}
| constante_estructurada                                  {printf("constante: constante_estructurada\n");}
;

constante_enumerada : '(' l_constante ')'                 {printf("constante_enumerada : '(' l_constante ')'\n");}
  | '(' l_elemento_hash ')'                               {printf("constante_enumerada : '(' l_elemento_hash ')'\n");}
  ;

l_constante : rep_constante                               {printf("l_constante : rep_constante\n");}
 |                                                        {printf("l_constante : \n");}
 ;
rep_constante : rep_constante ',' constante               {printf("rep_constante : rep_constante ',' constante\n");}
 | constante                                              {printf("rep_constante : constante\n");}
 ;

l_elemento_hash : rep_elemento_hash                       {printf("l_elemento_hash : rep_elemento_hash\n");}
 |                                                        {printf("l_elemento_hash : \n");}
 ;
rep_elemento_hash : rep_elemento_hash ',' elemento_hash   {printf("rep_elemento_hash : rep_elemento_hash ',' elemento_hash\n");}
 | elemento_hash                                          {printf("rep_elemento_hash : elemento_hash\n");}
 ;  

elemento_hash : CTC_CADENA FD_ASIG constante              {printf("elemento_hash : CTC_CADENA FD_ASIG constante\n");}
 ;

constante_estructurada : '{' l_campo_constante '}'        {printf("constante_estructurada : '{' l_campo_constante '}'\n");}

l_campo_constante : l_campo_constante ',' campo_constante {printf("l_campo_constante : l_campo_constante ',' campo_constante\n");}
 | campo_constante                                        {printf("l_campo_constante : campo_constante\n");}
 ;

campo_constante : IDENTIFICADOR '=' constante             {printf("campo_constante : IDENTIFICADOR '=' constante\n");}
 ;


/****************************/
/* declaracion de variables */
/****************************/


declaraciones_variables : VARIABLES l_declaracion FIN     {printf("declaraciones_variables : campo_constante\n");}

l_declaracion: l_declaracion declaracion_variables        {printf("l_declaracion : l_declaracion declaracion_variables\n");}
  | declaracion_variables                                 {printf("l_declaracion : declaracion_variables\n");}
  ;

declaracion_variables : l_ident ':' especificacion_tipo ';'                     {printf("declaracion_variables : l_ident ':' especificacion_tipo ';'\n");}
  | l_ident ':' especificacion_tipo  '=' l_expr ';'                             {printf("declaracion_variables : l_ident ':' especificacion_tipo  '=' l_expr ';'\n");}
  ;

l_expr :  l_expr ',' expresion                            {printf("l_expr : l_expr ',' expresion\n");}
  | expresion                                             {printf("l_expr : expresion\n");}
  ;

l_ident : l_ident ',' IDENTIFICADOR                       {printf("l_ident : l_ident ',' IDENTIFICADOR\n");}
  | IDENTIFICADOR                                         {printf("l_ident : IDENTIFICADOR\n");}
  ;



/****************************/
/* declaracion de funciones */
/****************************/


declaracion_funcion : FUNCION IDENTIFICADOR FD_ASIG tipo_salida cuerpo_funcion  {printf("declaracion_funcion : FUNCION IDENTIFICADOR FD_ASIG tipo_salida cuerpo_funcion\n");}
 | FUNCION IDENTIFICADOR lista_parametros FD_ASIG tipo_salida cuerpo_funcion    {printf("declaracion_funcion : FUNCION IDENTIFICADOR lista_parametros FD_ASIG tipo_salida cuerpo_funcion\n");}
 ;

lista_parametros : '(' l_parametros parametros ')'        {printf("lista_parametros : '(' l_parametros parametros ')'\n");}

l_parametros : l_parametros parametros ';'                {printf("l_parametros : l_parametros parametros ';'\n");}
 |                                                        {printf("l_parametros : \n");}
 ;

parametros : rep_ident ':' especificacion_tipo            {printf("parametros : rep_ident ':' especificacion_tipo\n");}
 | rep_ident ':' especificacion_tipo '=' l_expr_constante {printf("parametros : rep_ident ':' especificacion_tipo '=' l_expr_constante\n");}
 ;

rep_ident : rep_ident ',' IDENTIFICADOR                   {printf("rep_ident : rep_ident ',' IDENTIFICADOR\n");}
 | IDENTIFICADOR                                          {printf("rep_ident : IDENTIFICADOR\n");}
 ; 

l_expr_constante : l_expr_constante ',' expresion_constante                     {printf("l_expr_constante : l_expr_constante ',' expresion_constante\n");}
 | expresion_constante                                                          {printf("l_expr_constante : expresion_constante\n");}
 ;

tipo_salida : especificacion_tipo                         {printf("tipo_salida : especificacion_tipo\n");}
| NADA                                                    {printf("tipo_salida : NADA\n");}
;

cuerpo_funcion: l_declaraciones_constantes                {printf("cuerpo_funcion : l_declaraciones_constantes\n");}
 | l_declaraciones_variables                              {printf("cuerpo_funcion : l_declaraciones_variables\n");}
 | rep_declaracion_funcion                                {printf("cuerpo_funcion : rep_declaracion_funcion\n");}
 | bloque_instrucciones                                   {printf("cuerpo_funcion : bloque_instrucciones\n");}
 ;

l_declaraciones_constantes : declaraciones_constantes     {printf("l_declaraciones_constantes : declaraciones_constantes\n");}
 |                                                        {printf("l_declaraciones_constantes : \n");}
 ;

l_declaraciones_variables : declaraciones_variables       {printf("l_declaraciones_variables : declaraciones_variables\n");}
 |                                                        {printf("l_declaraciones_variables : \n");}
 ;

rep_declaracion_funcion : rep_declaracion_funcion declaracion_funcion         {printf("rep_declaracion_funcion : rep_declaracion_funcion declaracion_funcion\n");}
 |                                                                            {printf("rep_declaracion_funcion : \n");}
 ;

bloque_instrucciones : PRINCIPIO l_instruccion FIN         {printf("bloque_instrucciones : PRINCIPIO l_instruccion FIN\n");}

l_instruccion :  l_instruccion instruccion                 {printf("l_instruccion : l_instruccion instruccion \n");}
 | instruccion                                             {printf("l_instruccion : instruccion\n");}
 ;

/*****************/
/* instrucciones */
/*****************/
instruccion : instruccion_expresion                         {printf("instruccion : instruccion_expresion\n");}
  | instruccion_bifurcacion                                 {printf("instruccion : instruccion_bifurcacion\n");}
  | instruccion_bucle                                       {printf("instruccion : instruccion_bucle\n");}
  | instruccion_salto                                       {printf("instruccion : instruccion_salto\n");}
  | instruccion_destino_salto                               {printf("instruccion : instruccion_destino_salto\n");}
  | instruccion_devolver                                    {printf("instruccion : instruccion_devolver\n");}
  | instruccion_vacia                                       {printf("instruccion : instruccion_vacia\n");}
  | instruccion_lanzamiento_excepcion                       {printf("instruccion : instruccion_lanzamiento_excepcion\n");}
  | instruccion_captura_excepcion                           {printf("instruccion : instruccion_captura_excepcion\n");}
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
| expresion_indexada INDIRECCION expresion_basica
| expresion_indexada indice
| expresion_indexada INDIRECCION indice
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
