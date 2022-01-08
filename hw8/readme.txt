
One of the 2-d array can be used to represent  image pixels, e.g. a image of width 100, height 80 can be represented as 
#define WIDTH 100
#define HEIGHT 80
unsigned char red[HEIGHT][ WIDTH];
unsigned char green[HEIGHT][ WIDTH];
unsigned char blue[HEIGHT][ WIDTH]; // which is the same as above
to initialize them to 0 :
for ( int j = 0; j < HEIGHT; j++)
{
	for ( int I = 0; I < WIDTH; i++)
	{
		red[j][i] = 0; // 0-255, 0,0,0 is black
		green[j][i] = 0;
		blue[j][i] = 0;
	}
}

printf(“p3\n#test.ppm\n%d %d\n%d\n”, WIDTH, HEIGHT, 255);
use a two for loop to print a image like follows.

Example format for a image below, where 15 is the maximum color value, please use 255 for our case
P3
# feep.ppm
8 4
15
 0  0  0    0  0  0    0  0  0   15  0 15 0  0  0    0  0  0    0  0  0   15  0 15 
 0  0  0    0 15  7    0  0  0    0  0  0 0  0  0    0  0  0    0  0  0   15  0 15 
 0  0  0    0  0  0    0 15  7    0  0  0 0  0  0    0  0  0    0  0  0   15  0 15 
15  0 15    0  0  0    0  0  0    0  0  0 0  0  0    0  0  0    0  0  0   15  0 15



Question:
How do we draw a line from say (10,10) --- (40, 50)

Hint, to draw this line,  X will need to go from 10->40 increment by 1 at a time.
Meanwhile, Y = f(x),  use your mathematic knowledge to figure out function f here. 

Once you figure out X,Y both are integers, then you can set the color of that pixel by 
Red[y][x] = 255 
green[y][x] = 255
blue[y][x] = 255
this will set the color to white
