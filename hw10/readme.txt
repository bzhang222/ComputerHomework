
a non C++ version of stack implementation

int *array;
int top = 0;
void init( int NumberOfElement)
{
	array = new int[100];
}
void destroy()
{
	delete [] array;
}

void push ( int val)
{
	// add the val to the top and increase top by one
}

int pop ( )
{
	// get the value on the top to a variable x; and decrement top, return x
}

WORK1:
write main function to use above function to push 100, 10, 30 into it, and pop out them, and observe the sequence.


///////////////////// C++

WORK2:
create a class called IntStack as integer stack using an integer array 


IntStack will have two methods push and pop, it may also need constructor and desctructor


