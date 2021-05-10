%{
  #include <stdio.h>
  //#include "tokens.h"
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
RUTA            \|\/?({CARACTER_SIMPLE}+\/)*{CARACTER_SIMPLE}+\|
DELIMITADOR     (\{|\}|\(|\)|\:|\;|\,)
OPERADOR        (\+|\-|\*|\/|\%|\&|\||\@|~|\<|\>|\!|\=|\.|\[|\]|\^|\\)


%%
tamano          {printf("linea %d, - - - - -  Tamaño: %s\n", yylineno, yytext); return(TAMANO);}

array      		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ARRAY);}
cabecera  		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CABECERA);}
cada      		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CADA);}
cadena    		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CADENA);}
caracter  		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CARACTER);}
conjunto  		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CONJUNTO);}
constantes 		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CONSTANTES);}
continuar 		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(CONTINUAR);}
de        		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(DE);}
defecto   		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(DEFECTO);}
devolver  		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(DEVOLVER);}
ejecuta   		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(EJECUTA);}
encambio  		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ENCAMBIO);}
entero    		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ENTERO);}
es        		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ES);}
escape    		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ESCAPE);}
estructura 		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ESTRUCTURA);}
etiqueta  		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(ETIQUETA);}
excepcion 		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(EXCEPCION);}
fichero   		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(FICHERO);}
fin       		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(FIN);}
funcion   		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(FUNCION);}
hacer     		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(HACER);}
hash      		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(HASH);}
lanza     		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(LANZA);}
mientras  		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(MIENTRAS);}
nada      		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(NADA);}
otra      		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(OTRA);}
para      		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(PARA);}
principio 		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(PRINCIPIO);}
programa  		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(PROGRAMA);}
real      		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(REAL);}
ref       		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(REF);}
saltar    		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(SALTAR);}
si        		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(SI);}
sino      		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(SINO);}
tipos     		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(TIPOS);}
union     		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(UNION);}
variables 		{printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return(VARIABLES);}

{IDENTIFICADOR} {printf("linea %d, identificador: %s\n", yylineno, yytext); return(IDENTIFICADOR);}
{DECIMAL}       {printf("linea %d, decimal: %s\n", yylineno, yytext); return(CTC_ENTERA);}
{OCTAL}         {printf("linea %d, octal: %s\n", yylineno, yytext); return(CTC_ENTERA);}
{HEXADEC}       {printf("linea %d, hexadecimal: %s\n", yylineno, yytext); return(CTC_ENTERA);}
{NUMREAL}       {printf("linea %d, número real: %s\n", yylineno, yytext); return(CTC_REAL);}
{NUMREALEXP}    {printf("linea %d, número real: %s\n", yylineno, yytext); return(CTC_REAL);}
{CARACTER}      {printf("linea %d, carácter: %s\n", yylineno, yytext); return(CTC_CARACTER);}
{CADENA}        {printf("linea %d, cadena: %s\n", yylineno, yytext); return(CTC_CADENA);}
{RUTA}          {printf("linea %d, ruta: %s\n", yylineno, yytext); return(RUTA);}
{DELIMITADOR}   {printf("linea %d, delimitador: %s\n", yylineno, yytext); return(yytext[0]);}
{OPERADOR}      {printf("linea %d, operador: %s\n", yylineno, yytext); return(yytext[0]);}

\*{2}           {printf("linea %d, potencia: %s\n", yylineno, yytext); return(POTENCIA);}
=\+             {printf("linea %d, suma_asig: %s\n", yylineno, yytext); return(SUMA_ASIG);}
=\-             {printf("linea %d, resta_asig: %s\n", yylineno, yytext); return(RESTA_ASIG);}
=\*             {printf("linea %d, multiplicar_asig: %s\n", yylineno, yytext); return(MULT_ASIG);}
=\/             {printf("linea %d, dividir_asig: %s\n", yylineno, yytext); return(DIV_ASIG);}
=\%             {printf("linea %d, módulo_asig: %s\n", yylineno, yytext); return(MOD_ASIG);}
=\<\-           {printf("linea %d, flechaIzq_asig: %s\n", yylineno, yytext); return(FI_ASIG);}
=\-\>           {printf("linea %d, flechaDer_asig: %s\n", yylineno, yytext); return(FD_ASIG);}
=\&             {printf("linea %d, AND_asig: %s\n", yylineno, yytext); return(AND_ASIG);}
=\@             {printf("linea %d, XOR_asig: %s\n", yylineno, yytext); return(XOR_ASIG);}
=\|             {printf("linea %d, OR_asig: %s\n", yylineno, yytext); return(OR_ASIG);}
=(\*){2}        {printf("linea %d, potencia_asig: %s\n", yylineno, yytext); return(POT_ASIG);}
=\>             {printf("linea %d, mayor_igual: %s\n", yylineno, yytext); return(GE);}
=\<             {printf("linea %d, menor_igual: %s\n", yylineno, yytext); return(LE);}
==              {printf("linea %d, igual: %s\n", yylineno, yytext); return(EQ);}
\!=             {printf("linea %d, distinto: %s\n", yylineno, yytext); return(NEQ);}
\&{2}           {printf("linea %d, AND: %s\n", yylineno, yytext); return(AND);}
\|{2}           {printf("linea %d, OR: %s\n", yylineno, yytext); return(OR);}
\<\-            {printf("linea %d, flechaIzq: %s\n", yylineno, yytext); return(FLECHA_IZDA);}
\-\>            {printf("linea %d, flechaDer: %s\n", yylineno, yytext); return(FLECHA_DCHA);}
\^\.            {printf("linea %d, indirección: %s\n", yylineno, yytext); return(INDIRECCION);}


#{2}(.)*\n      	;
#-              	BEGIN(COMENTARIO);
<COMENTARIO>.|\n  	;
<COMENTARIO>-#  	BEGIN(INITIAL);

.	printf("linea %d, error\n", yylineno);


%%


// int yywrap() {
//   return(1);
// }

// int main(int argc, char *argv[]) {
//   if (argc < 2) {
//     printf("Uso: ./mini NombreArchivo\n");
//   } else {
//     yyin = fopen(argv[1],"r");
//     while (yylex());
//   }
// }