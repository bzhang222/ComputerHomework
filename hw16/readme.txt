
// give input like this, ((3* (3 + 4 ) * 6) ), we can parse it into a Express-tree
// an express tree is a binary tree which has left , right and operator; once contructed, express tree can be evaluated recursively, as both left and right are also an express tree. 
// to build a express tree from an normal in expression requires at least two stacks. one for operators and one for operands;
// the ) will be the trigger to evaluate.
// the evaluate is done by: pop two element from operand stack and pop one from operator and form an tree, then push the root of the tree to the operand stack.


#include <stack>
#include <stdio.h>
using namespace std;
// an union is a storage block which can be interpreted differently for different purpose., e.g. following 4 bytes can be used as an integer or char
// when used as a char, it wasted 3 bytes, but it is able to universally store both integer and char, we can have even more, like float
typedef union 
{
	float f;
    int i;
	char op; //op can be + - * / (  ) 
	
}token_u;

typedef struct tokenNode
{
	bool is_op;
	token_u token;
	struct tokenNode * left;
	struct tokenNode * right;
}node_t;

node_t* parser(const char*str1)
{
	stack<node_t*> operator_stack;
	stack<node_t*> operand_stack;
	
	const char *p = str1;
	while(true)
	{
	   char c = *p;
	   if (c ==';')
	      break;
	    // if c is digit, create node_t *n = new node_t; n->token.i = c - '0';
		// make sure node's left and right are all assign to NULL;
		
		if c is + * , create a node of operator type, i.e. set the is_op to true,
		
		
	   // if c  is ( , do nothing
	   // if c is ),  pop operator stack, pop operand stack twice, and set the operator.right and left to point to operands
	      then push the result again in operand_stack. 
	}
	node*_t val = operator_stack.top();
	return val;
}

int main()
{
	char *p = "((3* (3 + 4 ) * 6) );";
	node_t* gram_tree = parser(p);
	return 0;
}
