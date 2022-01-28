when we need other type of stack, we will have to define for each type, though they are very similiar except the type
intStack
floatStack
doubleStack 
...
C++ allows a template, e.g. in std:: namespace, it defined following stack

#include <stack>

std::stack<int> iStack;
std::stack<float> fStack;

i.e., you can define any type of stack using this template.

simliarly, it defined other template type
std::list<int> ilist;
std::list<float> floatList;

C++ std:: also defined a string class

std::string s1;
s1 = "abc";

s1 += "de";

std::cout << s1; // will show 'abcde'


