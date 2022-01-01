1 define a myAbsolute(float f) , to return the absolute value of a float number

2 using a method similiar to binary search to find the SQRT(5)
define two floats called leftand right, pre - set them to 2 and 3, as we know sqrt(5) is between 2 and 3;
try the mid, see if the mid is too big or too small and adjust left and right accordingly, program ends when the 
precision reaches 1e-4, i.e. abs(mid * mid - 5) < 1e-4. 

3  similiarly, there is a solution between 5 and 6 for folowing function, it can be solved in the same way. describe what need to change base on above implementation.
    x ^ 2 - 2x - 16 = 0

4 think about how to make this method generic so that it can solve more simliar problem. is there a garantee on the solution been found in finite time? does it apply for non-monotonic functions?


