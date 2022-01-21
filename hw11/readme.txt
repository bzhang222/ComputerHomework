
// arrays can be initialized at declaration time

e.g.
int ii[] = {3,4,5,6};
this declare and init an array of 4 elements.

you can have an array of pointers
char * cc[] = {"3","$","a"}; //this initialize an array of 4 char pointers 

similiarly, following array of pointers contain an post-fix math expression
char * tokens [] ={"3","45","5", "+", "*","2","/","="};

atoi(tokens[0]) ==> will convert string to integer, in this case returns 3
atoi(tokens[1]) ==>returns 44

// use the intStack that we created last time, peek the first char of each string, if it is digit, then 
// treat it as a number and convert using atoi; if it is any of the + / * -, then do operation, 
// if it is =, then end the process and return the value
int evaluate(char** tokens )
{
	// evaluate the post-fix expression

}
50*3/2==> 75