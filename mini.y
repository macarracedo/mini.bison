
%{
  
  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  int yyerror(char *);

%}


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

declaraciones_tipos : 'tipos' [ declaracion_tipo ]+ 'fin' ';'

declaracion_tipo : IDENTIFICADOR ES especifiacion_tipo ';' 

especificacion_tipo : [ 'ref' ]* tipo_basico


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

tipo_estructurado : 'estructura' 'principio' [ linea_campos ]+ 'fin'
| 'union' 'principio' [ linea_campos ]+ 'fin'

linea_campo: s ',' linea_campo 'es' especificacion_tipo ';'
           | linea_campo 'es' especificacion_tipo ';' 
           ;


/*****************************/
/* declaracion de constantes */
/*****************************/


/****************************/
/* declaracion de variables */
/****************************/


/****************************/
/* declaracion de funciones */
/****************************/


/*****************/
/* instrucciones */
/*****************/


/***************/
/* expresiones */
/***************/

    
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
