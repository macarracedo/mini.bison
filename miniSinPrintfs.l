%{
  #include <stdio.h>
  #include "mini.tab.h"
%}

%option yylineno
%option case-insensitive
%x COMENTARIO

IDENTIFICADOR   [A-Za-z_][A-Za-z_0-9]*
DECIMAL         [0-9]+
OCTAL           #[0-7]+
HEXADEC         #[hH][A-Fa-f0-9]+
NUMREAL         ({DECIMAL}|{OCTAL}|{HEXADEC})?\.({DECIMAL}|{OCTAL}|{HEXADEC})
NUMREALEXP      {NUMREAL}exp((\+|\-)?({DECIMAL}|{OCTAL}|{HEXADEC}))
CARACTER_SIMPLE (([^'#\n]){1}|(#('|a|b|f|n|r|t|v))|(#[1]?[0-7]{1,2})|(#[hH][1-7]?[0-9A-Fa-f]))
CARACTER        '{CARACTER_SIMPLE}'
CADENA          \'({CARACTER_SIMPLE}*(#\n)?)*\'
RUTA2            \|\/?({CARACTER_SIMPLE}+\/)*{CARACTER_SIMPLE}+\|
RUTA           [|][/]?[^\n|/]+([/][^\n|/]+)*[|]
DELIMITADOR     (\{|\}|\(|\)|\:|\;|\,)
OPERADOR        (\+|\-|\*|\/|\%|\&|\||\@|~|\<|\>|\!|\=|\.|\[|\]|\^|\\)


%%
tamano          { return(TAMANO);}

array      		{  return(ARRAY);}
cabecera  		{  return(CABECERA);}
cada      		{  return(CADA);}
cadena    		{  return(CADENA);}
caracter  		{  return(CARACTER);}
conjunto  		{  return(CONJUNTO);}
constantes 		{  return(CONSTANTES);}
continuar 		{  return(CONTINUAR);}
de        		{  return(DE);}
defecto   		{  return(DEFECTO);}
devolver  		{  return(DEVOLVER);}
ejecuta   		{  return(EJECUTA);}
encambio  		{  return(ENCAMBIO);}
entero    		{  return(ENTERO);}
es        		{  return(ES);}
escape    		{  return(ESCAPE);}
estructura 		{  return(ESTRUCTURA);}
etiqueta  		{  return(ETIQUETA);}
excepcion 		{  return(EXCEPCION);}
fichero   		{  return(FICHERO);}
fin       		{  return(FIN);}
funcion   		{  return(FUNCION);}
hacer     		{  return(HACER);}
hash      		{  return(HASH);}
lanza     		{  return(LANZA);}
mientras  		{  return(MIENTRAS);}
nada      		{  return(NADA);}
otra      		{  return(OTRA);}
para      		{  return(PARA);}
principio 		{  return(PRINCIPIO);}
programa  		{  return(PROGRAMA);}
real      		{  return(REAL);}
ref       		{  return(REF);}
saltar    		{  return(SALTAR);}
si        		{  return(SI);}
sino      		{  return(SINO);}
tipos     		{  return(TIPOS);}
union     		{  return(UNION);}
variables 		{  return(VARIABLES);}

{IDENTIFICADOR} { return(IDENTIFICADOR);}
{DECIMAL}       { return(CTC_ENTERA);}
{OCTAL}         { return(CTC_ENTERA);}
{HEXADEC}       { return(CTC_ENTERA);}
{NUMREAL}       { return(CTC_REAL);}
{NUMREALEXP}    { return(CTC_REAL);}
{CARACTER}      { return(CTC_CARACTER);}
{CADENA}        { return(CTC_CADENA);}
{RUTA}          { return(RUTA);}
{DELIMITADOR}   { return(yytext[0]);}
{OPERADOR}      { return(yytext[0]);}

\*{2}           { return(POTENCIA);}
=\+             { return(SUMA_ASIG);}
=\-             { return(RESTA_ASIG);}
=\*             { return(MULT_ASIG);}
=\/             { return(DIV_ASIG);}
=\%             { return(MOD_ASIG);}
=\<\-           { return(FI_ASIG);}
=\-\>           { return(FD_ASIG);}
=\&             { return(AND_ASIG);}
=\@             { return(XOR_ASIG);}
=\|             { return(OR_ASIG);}
=(\*){2}        { return(POT_ASIG);}
=\>             { return(GE);}
=\<             { return(LE);}
==              { return(EQ);}
\!=             { return(NEQ);}
\&{2}           { return(AND);}
\|{2}           { return(OR);}
\<\-            { return(FLECHA_IZDA);}
\-\>            { return(FLECHA_DCHA);}
\^\.            { return(INDIRECCION);}


#{2}(.)*\n      	;
#-              	BEGIN(COMENTARIO);
<COMENTARIO>.|\n  	;
<COMENTARIO>-#  	BEGIN(INITIAL);

[ \n\t]     ;

.	printf("linea %d, error\n", yylineno);


%%
