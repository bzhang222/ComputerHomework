

Thinking about a simple program language, it only support 10 integer variables
$0 , $1 .... $9 are the name of the variables,and all variable has to start with $ followed by a single-digit number


imaging that it only support post-fix expression

$1 4 5 2 + * =

this would mean
$1 = 4* (5+2)

Assume that the only statement the language support is assignment , since you can never assign a constant to an expression
i.e. even in C/C++, you can not say
5 = 3+2 ;
this doesn't work, as "=" means assign, and the leftside of assignment statement has to be a variable.

so it is always safe to assume the first token in the statement is a variable.
e.g.:

char * tokens [] ={ "$1", "3","45","5", "+", "*","2","/","="};

so this langauge support + - * / =(assignment) 


so in your program, define 10 variable slot , each for this simple language, $0... $9 correspondingly.

in your excution engine, make a current_variable(it can be either an index to the slot, or an pointer pointing to the slot above),

when it see "=", it needs to pop the stack top and put it in  the current_variable 


