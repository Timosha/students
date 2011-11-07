%start start

%token f x comma

%%

start:  X f X { printf("%s\n", "OK");}
        ;
X :     x
        | x Y
        ;
Y :     comma x
        | comma x Y
        ;

%%
/* start of programs */
#include "lex.yy.c"

main() { return  yyparse();}

yyerror(char *s) { fprintf(stderr,"%s\n",s); }

