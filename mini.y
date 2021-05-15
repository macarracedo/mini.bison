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

<<<<<<< HEAD
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
    declaraciones_funciones                               {printf("bloque_programa --> \n");}
    bloque_instrucciones                                  {printf("bloque_programa --> \n");}
    | error ';'                                           {yyerrok;}
    ;
=======
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
     rep_declaracion_funcion                                  {printf("bloque_programa --> \n");}
     bloque_instrucciones                                     {printf("bloque_programa --> \n");}
     | error                                               {yyerror;}
     ;
>>>>>>> 51a0091b8c4f5fb93ac48eafa4b600d7e4ca3fd4




/************************/
/* declaracion de tipos */
/************************/

<<<<<<< HEAD
declaraciones_tipos : TIPOS l_decl_tipo FIN               {printf("declaraciones_tipos --> TIPOS l_decl_tipo FIN\n");}
  |
  |error ';'                                              {yyerrok;}
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
=======
 declaraciones_tipos : TIPOS l_decl_tipo FIN               {printf("declaraciones_tipos --> TIPOS l_decl_tipo FIN\n");}
   |
   |error                                                  {yyerror;}
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
>>>>>>> 51a0091b8c4f5fb93ac48eafa4b600d7e4ca3fd4


/*****************************/
/* declaracion de constantes */
/*****************************/

<<<<<<< HEAD
declaraciones_constantes : CONSTANTES l_declaraciones_constantes FIN          {printf("declaraciones_constantes : CONSTANTES l_declaraciones_constantes FIN\n");}
  |                                                                           {printf("declaraciones_constantes : \n");}
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
=======
 declaraciones_constantes : CONSTANTES l_declaraciones_constantes FIN          {printf("declaraciones_constantes : CONSTANTES l_declaraciones_constantes FIN\n");}
   |                                                                           {printf("declaraciones_constantes : \n");}
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
>>>>>>> 51a0091b8c4f5fb93ac48eafa4b600d7e4ca3fd4


/****************************/
/* declaracion de variables */
/****************************/


<<<<<<< HEAD
declaraciones_variables : VARIABLES l_declaracion FIN     {printf("declaraciones_variables : campo_constante\n");}
  |
  ;

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
=======
 declaraciones_variables : VARIABLES l_declaracion FIN     {printf("declaraciones_variables : campo_constante\n");}
   |
   ;

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
>>>>>>> 51a0091b8c4f5fb93ac48eafa4b600d7e4ca3fd4



/****************************/
/* declaracion de funciones */
/****************************/

<<<<<<< HEAD
declaraciones_funciones : declaraciones_funciones declaracion_funcion     {printf("declaraciones_funciones : declaraciones_funciones declaracion_funcion\n");}
  |                                                                       {printf("declaraciones_funciones : \n");}
  ;

declaracion_funcion : FUNCION IDENTIFICADOR op_lista_parametros FLECHA_DCHA tipo_salida cuerpo_funcion {printf("declaracion_funcion : FUNCION IDENTIFICADOR FD_ASIG tipo_salida cuerpo_funcion\n");}
 ;

op_lista_parametros : lista_parametros                      {printf("op_lista_parametros : lista_parametros\n");}
  |                                                         {printf("op_lista_parametros : \n");}
  ;

lista_parametros : '(' rep_parametros parametros ')'        {printf("lista_parametros : '(' l_parametros parametros ')'\n");}
  ;

rep_parametros : rep_parametros parametros ';'              {printf("l_parametros : l_parametros parametros ';'\n");}
 |                                                        
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

cuerpo_funcion: declaraciones_constantes                  {printf("cuerpo_funcion : declaraciones_constantes\n");}
 | declaraciones_variables                                {printf("cuerpo_funcion : declaraciones_variables\n");}
 | declaraciones_funciones                                {printf("cuerpo_funcion : declaraciones_funciones\n");}
 | bloque_instrucciones                                   {printf("cuerpo_funcion : bloque_instrucciones\n");}
 | error ';'                                                 {yyerrok;}
=======
 declaracion_funcion : FUNCION IDENTIFICADOR op_lista_parametros FD_ASIG tipo_salida cuerpo_funcion {printf("declaracion_funcion : FUNCION IDENTIFICADOR FD_ASIG tipo_salida cuerpo_funcion\n");}
  ;

  rep_declaracion_funcion : rep_declaracion_funcion declaracion_funcion     {printf("rep_declaracion_funcion : rep_declaracion_funcion declaracion_funcion\n");}
   |
   ;

 op_lista_parametros : lista_parametros
   |
   ;

 lista_parametros : '(' rep_parametros parametros ')'        {printf("lista_parametros : '(' l_parametros parametros ')'\n");}
   ;

 rep_parametros : rep_parametros parametros ';'              {printf("l_parametros : l_parametros parametros ';'\n");}
  |                                                        
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
>>>>>>> 51a0091b8c4f5fb93ac48eafa4b600d7e4ca3fd4
 ;

 cuerpo_funcion: declaraciones_constantes                {printf("cuerpo_funcion : declaraciones_constantes\n");}
  | declaraciones_variables                              {printf("cuerpo_funcion : declaraciones_variables\n");}
  | rep_declaracion_funcion                                {printf("cuerpo_funcion : rep_declaracion_funcion\n");}
  | bloque_instrucciones                                   {printf("cuerpo_funcion : bloque_instrucciones\n");}
  ;

<<<<<<< HEAD
bloque_instrucciones : PRINCIPIO l_instruccion FIN         {printf("bloque_instrucciones : PRINCIPIO l_instruccion FIN\n");}

l_instruccion :  l_instruccion instruccion                 {printf("l_instruccion : l_instruccion instruccion \n");}
 | instruccion                                             {printf("l_instruccion : instruccion\n");}
 ;
=======
  
 bloque_instrucciones : PRINCIPIO l_instruccion FIN         {printf("bloque_instrucciones : PRINCIPIO l_instruccion FIN\n");}

 l_instruccion :  l_instruccion instruccion                 {printf("l_instruccion : l_instruccion instruccion \n");}
  | instruccion                                             {printf("l_instruccion : instruccion\n");}
  ;
>>>>>>> 51a0091b8c4f5fb93ac48eafa4b600d7e4ca3fd4

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
  | error ';'                                                {yyerrok;}
  ;

instruccion_expresion : expresion_funcional ';'             {printf("instruccion_expresion : expresion_funcional ';'\n");}
  | asignacion ';'                                          {printf("instruccion_expresion : asignacion ';'\n");}
  ;

asignacion : expresion_indexada operador_asignacion expresion     {printf("asignacion : expresion_indexada operador_asignacion expresion\n");}
;

operador_asignacion : '='                                   {printf("operador_asignacion : '='\n");}
  | SUMA_ASIG                                               {printf("operador_asignacion : SUMA_ASIG\n");}
  | RESTA_ASIG                                              {printf("operador_asignacion : RESTA_ASIG\n");}
  | MULT_ASIG                                               {printf("operador_asignacion : MULT_ASIG\n");}
  | DIV_ASIG                                                {printf("operador_asignacion : DIV_ASIG\n");}
  | MOD_ASIG                                                {printf("operador_asignacion : MOD_ASIG\n");}
  | POT_ASIG                                                {printf("operador_asignacion : POT_ASIG\n");}
  | FI_ASIG                                                 {printf("operador_asignacion : FI_ASIG\n");}
  | FD_ASIG                                                 {printf("operador_asignacion : FD_ASIG\n");}
  | AND_ASIG                                                {printf("operador_asignacion : AND_ASIG\n");}
  | XOR_ASIG                                                {printf("operador_asignacion : XOR_ASIG\n");}
  | OR_ASIG                                                 {printf("operador_asignacion : OR_ASIG\n");}
  ;

instruccion_bifurcacion : SI '(' expresion ')' accion rep_otros_casos op_sino_accion FIN        {printf("instruccion_bifurcacion : SI '(' expresion ')' accion rep_otros_casos op_sino_accion FIN\n");}
  ;

op_sino_accion : SINO accion                                {printf("op_sino_accion : SINO accion\n");}
  |
  ;

rep_otros_casos : rep_otros_casos otros_casos               {printf("rep_otros_casos : rep_otros_casos otros_casos\n");}
  |                                                         {printf("rep_otros_casos : \n");}
  ;


otros_casos : SI ENCAMBIO '(' expresion ')' accion          {printf("otros_casos : SI ENCAMBIO '(' expresion ')' accion\n");}
  ;

accion : instruccion                                        {printf("accion : instruccion\n");}
  | bloque_instrucciones                                    {printf("accion : bloque_instrucciones\n");}
  ;

instruccion_bucle: MIENTRAS '(' expresion ')' accion                          {printf("instruccion_bucle : MIENTRAS '(' expresion ')' accion\n");}
  | HACER accion MIENTRAS '(' expresion ')' ';'                               {printf("instruccion_bucle : HACER accion MIENTRAS '(' expresion ')' ';'\n");}
  | PARA '(' l_asignaciones ';' expresion ';' l_asignaciones ')' accion       {printf("instruccion_bucle : PARA '(' l_asignaciones ';' expresion ';' l_asignaciones ')' accion\n");}
  | PARA CADA IDENTIFICADOR '(' expresion ')' accion                          {printf("instruccion_bucle : PARA CADA IDENTIFICADOR '(' expresion ')' accion\n");}
  ;

l_asignaciones : l_asignaciones ',' asignacion              {printf("l_asignaciones : l_asignaciones ',' asignacion\n");}
  | asignacion                                              {printf("l_asignaciones : asignacion\n");}
  ;

instruccion_salto : SALTAR IDENTIFICADOR ';'                {printf("instruccion_salto : SALTAR IDENTIFICADOR ';'\n");}
  | CONTINUAR ';'                                           {printf("instruccion_salto : CONTINUAR ';'\n");}
  | ESCAPE ';'                                              {printf("instruccion_salto : ESCAPE ';'\n");}
  ;

instruccion_destino_salto : ETIQUETA IDENTIFICADOR ';'      {printf("instruccion_destino_salto : ETIQUETA IDENTIFICADOR ';'\n");}
;

instruccion_devolver : DEVOLVER ';'                         {printf("instruccion_devolver : DEVOLVER ';'\n");}
  | DEVOLVER expresion ';'                                  {printf("instruccion_devolver : DEVOLVER expresion ';'\n");}
  ;

instruccion_vacia : ';'                                     {printf("instruccion_vacia : ';'\n");}
;

instruccion_lanzamiento_excepcion : LANZA EXCEPCION IDENTIFICADOR ';'         {printf("instruccion_lanzamiento_excepcion : LANZA EXCEPCION IDENTIFICADOR ';'\n");}
;

instruccion_captura_excepcion : EJECUTA bloque_instrucciones clausulas        {printf("instruccion_captura_excepcion : EJECUTA bloque_instrucciones clausulas\n");}
;

clausulas : clausulas_excepcion op_clausula_defecto                           {printf("clausulas : clausulas_excepcion op_clausula_defecto\n");}
  | clausula_defecto                                                          {printf("clausulas : clausula_defecto\n");}
  ;

op_clausula_defecto : clausula_defecto                                        {printf("op_clausula_defecto : clausula_defecto\n");}
  |
  ;
  
clausulas_excepcion : rep_clausula_excepcion_especifica clausula_excepcion_general                          {printf("clausulas_excepcion : rep_clausula_excepcion_especifica clausula_excepcion_general\n");}
;

rep_clausula_excepcion_especifica : rep_clausula_excepcion_especifica clausula_excepcion_especifica         {printf("rep_clausula_excepcion_especifica : rep_clausula_excepcion_especifica clausula_excepcion_especifica\n");}
  |                                                                                                         {printf("rep_clausula_excepcion_especifica : \n");}
  ;

clausula_excepcion_especifica : EXCEPCION IDENTIFICADOR bloque_instrucciones                                {printf("clausula_excepcion_especifica : EXCEPCION IDENTIFICADOR bloque_instrucciones\n");}
  ;

clausula_excepcion_general : OTRA EXCEPCION bloque_instrucciones                                            {printf("clausula_excepcion_general : OTRA EXCEPCION bloque_instrucciones\n");}
  ;

clausula_defecto : DEFECTO bloque_instrucciones                                                             {printf("clausula_defecto : DEFECTO bloque_instrucciones\n");}
  ;


/***************/
/* expresiones */
/***************/

agrup_expresion : expresion_constante       {printf("agrup_expresion : expresion_constante\n");}
  | expresion_indexada                      {printf("agrup_expresion : expresion_indexada\n");}
  | expresion_funcional                     {printf("agrup_expresion : expresion_funcional\n");}
  ;

expresion_constante : CTC_ENTERA      {printf("expresion_constante : CTC_ENTERA\n");}
| CTC_REAL                            {printf("expresion_constante : CTC_REAL\n");}
| CTC_CADENA                          {printf("expresion_constante : CTC_CADENA\n");}  
| CTC_CARACTER                        {printf("expresion_constante : CTC_CARACTER\n");}
;

expresion_indexada : expresion_basica                 {printf("expresion_indexada : expresion_basica\n");}        
| expresion_indexada '.' expresion_basica             {printf("expresion_indexada : expresion_indexada '.' expresion_basica\n");}
| expresion_indexada INDIRECCION expresion_basica     {printf("expresion_indexada : expresion_indexada INDIRECCION expresion_basica\n");}
| expresion_indexada op_indireccion indice            {printf("expresion_indexada : expresion_indexada op_indireccion indice\n");}
;

op_indireccion : INDIRECCION                          {printf("op_indireccion : INDIRECCION\n");}
  |                                                   {printf("agrup_expresion : \n");}
  ;

expresion_basica : IDENTIFICADOR                      {printf("expresion_basica : IDENTIFICADOR\n");}
| '(' expresion ')'                                   {printf("expresion_basica : '(' expresion ')'\n");}
| '^' expresion_basica                                {printf("expresion_basica : '^' expresion_basica\n");}
| '\\' expresion_basica                               {printf("expresion_basica : '\\' expresion_basica\n");}
;

indice : '[' expresion ']'                            {printf("indice : '[' expresion ']'\n");}
| '{' expresion '}'                                   {printf("indice : '{' expresion '}'\n");}
;

expresion_funcional : IDENTIFICADOR '(' l_expresion ')'  {printf("expresion_funcional : IDENTIFICADOR '(' l_expresion ')'\n");}
;

l_expresion : l_expresiones                   {printf("l_expresion : l_expresiones\n");}
  |                                           {printf("l_expresion :  \n");}
  ; 

l_expresiones : l_expresiones ',' expresion         {printf("l_expresiones : l_expresiones ',' expresion\n");}
  | expresion                                       {printf("l_expresiones : expresion\n");}
  ;

expresion : expresion_logica op_exp                 {printf("expresion : expresion_logica op_exp\n");}
  ;

op_exp : SI expresion SINO expresion                {printf("op_exp : SI expresion SINO expresion\n");}
  |                                                 {printf("op_exp :  \n");}
  ;

expresion_logica : expresion_logica_or              {printf("expresion_logica :  expresion_logica_or\n");}
  ;

expresion_logica_or : expresion_logica_or OR expresion_logica_and           {printf("expresion_logica_or :  expresion_logica_or OR expresion_logica_and\n");}
  | expresion_logica_and                                                    {printf("expresion_logica_or :  expresion_logica_and\n");}
  ;
expresion_logica_and : expresion_logica_and AND expresion_eq                {printf("expresion_logica_and :  expresion_logica_and AND expresion_eq\n");}
  | expresion_eq                                                            {printf("expresion_logica_and :  expresion_eq\n");}
  ;

expresion_eq : expresion_eq EQ expresion_comp                               {printf("expresion_eq :  expresion_eq EQ expresion_comp\n");}
  | expresion_eq NEQ expresion_comp                                         {printf("expresion_eq :  expresion_eq NEQ expresion_comp\n");}
  | expresion_comp                                                          {printf("expresion_eq :  expresion_comp\n");}
  ;

expresion_comp : expresion_comp '<' expresion_bin_or                        {printf("expresion_comp :  expresion_comp '<' expresion_bin_or\n");}
  | expresion_comp '>' expresion_bin_or                                     {printf("expresion_comp :  expresion_comp '>' expresion_bin_or\n");}
  | expresion_comp LE expresion_bin_or                                      {printf("expresion_comp :  expresion_comp LE expresion_bin_or\n");}
  | expresion_comp GE expresion_bin_or                                      {printf("expresion_comp :  expresion_comp GE expresion_bin_or\n");}
  | expresion_bin_or                                                        {printf("expresion_comp :  expresion_bin_or\n");}
  ;

expresion_bin_or : expresion_bin_or '|' expresion_bin_xor                   {printf("expresion_bin_or :  expresion_bin_or '|' expresion_bin_xor\n");}
  | expresion_bin_xor                                                       {printf("expresion_bin_or :  expresion_bin_xor\n");}
  ;

expresion_bin_xor : expresion_bin_xor '@' expresion_bin_and                 {printf("expresion_bin_xor :  expresion_bin_xor '@' expresion_bin_and\n");}
  | expresion_bin_and                                                       {printf("expresion_bin_xor :  expresion_bin_and\n");}
  ;

expresion_bin_and : expresion_bin_and '&' expresion_desp                    {printf("expresion_bin_and :  expresion_bin_and '&' expresion_desp\n");}
  | expresion_desp                                                          {printf("expresion_bin_and :  expresion_desp\n");}
  ;

expresion_desp : expresion_desp FLECHA_DCHA expresion_aditiva               {printf("expresion_desp :  expresion_desp FLECHA_DCHA expresion_aditiva\n");}
  | expresion_desp FLECHA_IZDA expresion_aditiva                            {printf("expresion_desp :  expresion_desp FLECHA_IZDA expresion_aditiva\n");}
  | expresion_aditiva                                                       {printf("expresion_desp :  expresion_aditiva\n");}
  ;

expresion_aditiva : expresion_aditiva '+' expresion_multiplicativa    {printf("expresion_aditiva : expresion_aditiva '+' expresion_multiplicativa");}
  | expresion_aditiva '-' expresion_multiplicativa                    {printf("expresion_aditiva :  expresion_aditiva '-' expresion_multiplicativa\n");}
  | expresion_multiplicativa                                          {printf("expresion_aditiva :  expresion_multiplicativa\n");}
  ;

expresion_multiplicativa : expresion_multiplicativa '*' expresion_potencia          {printf("expresion_multiplicativa :  expresion_multiplicativa '*' expresion_potencia\n");}
  | expresion_multiplicativa '/' expresion_potencia                                 {printf("expresion_multiplicativa :  expresion_multiplicativa '/' expresion_potencia\n");}
  | expresion_multiplicativa '%' expresion_potencia                                 {printf("expresion_multiplicativa :  expresion_multiplicativa '%' expresion_potencia\n");}
  | expresion_potencia                                                              {printf("expresion_multiplicativa :  expresion_potencia\n");}
  ;

expresion_potencia : expresion_noassoc POTENCIA expresion_potencia                  {printf("expresion_potencia :  expresion_noassoc POTENCIA expresion_potencia\n");}
  | expresion_noassoc                                                               {printf("expresion_potencia :  expresion_noassoc\n");}
  ;

expresion_noassoc : '-' agrup_expresion                                             {printf("expresion_noassoc :  '-' agrup_expresion\n");}
  | '~' agrup_expresion                                                             {printf("expresion_noassoc :  '~' agrup_expresion\n");}
  | '!' agrup_expresion                                                             {printf("expresion_noassoc :  '!' agrup_expresion\n");}
  | TAMANO agrup_expresion                                                          {printf("expresion_noassoc :  TAMANO agrup_expresion\n");}
  | agrup_expresion                                                                 {printf("expresion_noassoc :  agrup_expresion\n");}
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
