
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

PROGRAMA : inicio_programa bloque_programa
;


inicio_programa ::= ’programa’ IDENTIFICADOR ’;’ [ ’cabecera’ ( {RUTA} )+ ’;’ ]*
inicio_programa : PROGRAMA IDENTIFICADOR ’;’
                | PROGRAMA IDENTIFICADOR ’;’ ’cabecera’ ’,’ {RUTA} ’;’


/************************/
/* declaracion de tipos */
/************************/

declaraciones_tipos : 'tipos' s declaracion_tipo 'fin' ';'
| 'tipos' declaracion_tipo 'fin' ';'
;

declaracion_tipo : IDENTIFICADOR 'es' especifiacion_tipo ';' 

especificacion_tipo : especifiacion_tipo 'ref' tipo_basico
| tipo_basico
;


tipo_basico : IDENTIFICADOR 
  |tipo_escalar
  |tipo_enumerado 
;


tipo_escalar : ENTERO {$$ = {DECIMAL} || {OCTAL} || {HEXADEC};}
  |REAL               {$$ = {NUMREAL}|| {NUMREALEXP};}
  |CARACTER           {$$ = {CARACTER};}
  |CADENA             {$$ = {CADENA};}
  |FICHERO            
  |EXCEPCION ;


tipo_enumerado: 'array' 'de' especificacion_tipo
| 'hash' 'de' especificacion_tipo
| 'conjunto' 'de' especificacion_tipo
;


tipo_estructurado : 'estructura' 'principio' tipo_estructurado linea_campos 'fin'
| 'estructura' 'principio' linea_campos 'fin'
| 'union' 'principio' tipo_estructurado linea_campos 'fin'
| 'union' 'principio' linea_campos 'fin'
;



linea_campo:  linea_campo ',' IDENTIFICADOR 'es' especificacion_tipo ';'
           | IDENTIFICADOR 'es' especificacion_tipo ';' 
           ;


/*****************************/
/* declaracion de constantes */
/*****************************/

declaraciones_constantes : 'constantes' s 'fin'
;

s : s declaracion_constante
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

constante_enumerada : '(' sa ')'
| '(' sb ')'
;

sa : saa
 |
 ;
saa : saa ',' constante
 | constante
 ;

sb : sbb
 |
 ;
sbb : sbb ',' elemento_hash
 | elemento_hash
 ;  

elemento_hash : CTC_CADENA '->' constante
;

constante_estructurada : '{' sc '}'

sc : sc ',' campo_constante
 | campo_constante
 ;

campo_constante : IDENTIFICADOR '=' constante
;


/****************************/
/* declaracion de variables */
/****************************/


declaraciones_variables : 'variables' s 'fin'

s: s declaracion_variables
  | declaracion_variables
  ;

declaracion_variables : sa ':'' especificacion_tipo ';'
  | sa ':'' especificacion_tipo [ '=' sb ]? ';'
  ;

sb :  sb ',' expresion
  | expresion
  ;

sa : sa ',' IDENTIFICADOR
  | IDENTIFICADOR
  ;



/****************************/
/* declaracion de funciones */
/****************************/


declaracion_funcion : 'funcion' IDENTIFICADOR '->' tipo_salida cuerpo_funcion
 | 'funcion' IDENTIFICADOR lista_parametros '->' tipo_salida cuerpo_funcion
 ;

lista_parametros : '(' d parametros ')'

d : d parametros ';'
 | 
 ;

parametros : da ':' especificacion_tipo 
 | da ':' especificacion_tipo '=' db
 ;

da: da ',' IDENTIFICADOR
 | IDENTIFICADOR
 ;

db : db ',' expresion_constante
 | expresion_constante
 ;

tipo_salida : especificacion_tipo 
| 'nada'
;

cuerpo_funcion: dc
 | dd
 | de
 | bloque_instrucciones
 ;

dc :  
 | declaraciones_constantes
 ;

dd : 
 | declaraciones_variables
 ;

de : de declaracion_funcion
 | 
 ;

bloque_instrucciones : 'principio' df 'fin'

df :  df instruccion
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


instruccion_bucle ::= ’mientras’ ’(’ expresion ’)’ accion
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
