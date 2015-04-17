%{
#include "bison.tab.h"
%}
%%
"<" {return '<';}
">" {return '>';}
"&" {return '&';}
"|" {return '|';}
[^&\t|\n<>]+ {return STRING;}
%%
