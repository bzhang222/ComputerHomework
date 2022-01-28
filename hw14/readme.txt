
c++ also allows for call by reference, which will allow the function to modify the variable it passed in from caller:


int getMinMax(int * array, int length, int& min, int& max)
{
	min=1;
	max = 55;// the caller will get this value, because these are referencing to the caller's variable, i.e. min is an alias for caller's minimum, and max here is the alias for the maximum, min-and minium both refer to same memory location; same applie for max and maximum
 
}

int a [] = {1,2,5,1,55,33,29,35};
int mininum, maximum;
getMinMax(a, 8, minimum, maximum);

in C, you would have to pass the address of minimum and maximum; in C++, you can do the C-way or you can make the function to call-by-reference. you have more options in C++.



class ComplexNum
{
	float _x, _y;

public:
	ComplexNum( float x, float y);

	void	operator+= (ComplexNum & num2);

	void dump()
	{
		std::cout << _x << " + i" << _y << endl;
	}
};
ComplexNum::ComplexNum( float x, float y)
{
	_x = x;
	_y = y;	
}
void ComplexNum::operator+= (CompelxNum& num2)
{

	_x += num2._x;
	_y += num2._y;
}

ComplexNum num1(3,5), num2(4,6);
num1 += num2;
num1.dump();
Q1:
similiarly you can define operator *= for ComplexNum, and test out if it is correct.


similiarly you can define += for your IntStack class, which pop out everything from stack2 and put in current stack.

