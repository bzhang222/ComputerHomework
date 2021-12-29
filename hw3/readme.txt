unlike python, C functions only return one values
but there are times when we need the function to do more than just change one value
e.g.

// by pass in the address of data type, it allows the function to update mulitple variables 

int getMinMaxAvg( int * a, int len, int* pMin, int * pMax, int* pAvg)
{
	
	...
	*pMin = 10;
	...
			

}


implement above function. and calling it using

int array[10]
int min;
getMinMaxAvg(array, 10, &min ....);



===
char* and string

const char* line = "hello daniel"; //"3  4 +  8 * 40 -";
char buf[128];

to copy string:
strcpy(buf, line);


int getLen(char* str)
{
	char * p = str;
	int count = 0;
	while(*p != 0)
	{
		p++; //pointer inc by one
		count ++;
	}
	return count;
}


void capitalizeEachChar(char *str)
{
	char * p = str;

	while(*p != 0)
	{
		*p = toupper(*p);
		p++; //pointer inc by one
	}

}
void capitalizeEachChar(char *str)
{
	char * p = str;
	int i = 0;
	while(p[i] != 0)
	{
		p[i] = toupper(p[i])
		i++;
	}

}


void capitalizeEachChar(char *str)
{
	char * p = str;
	i = 0;
	for(int i =0;p[i] != 0;i++)
	{
		p[i] = toupper(p[i])
		
	}

}
// rewrite getLen, using array format, with while loop, and with for loop 



