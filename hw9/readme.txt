On top of HW8
we can create classes of different object

typedef struct
{
	unsigned char red, green, blue;
} color_t;

typedef struct
{
	int x, y;
} point_t;


class CCavas
{
public:
	color_t pixes[480][640];
	CCavas();
	
};

class CLine 
{
public:
	void draw(CCavas *cavas);
	CLine(int x1, int y1, int x2, int y2);
	point_t m_p1;
	point_t m_p2;
	color_t m_color;
};
CLine::CLine(int x1, int y1, int x2, int y2)
{
	m_p1.x = x1;
	m_p1.y = y1;
	//fill the rest	
}

void CLine::draw()
{
	
}
class CBox 
{
public:
	CBox(int x1,int y1,int x2,int y2);
	point_t m_leftTop;
	point_t m_rightBottom;
	void draw(CCavas *cavas);	
	color_t m_color;
};

CBox::CBox( int x1,int y1,int x2,int y2)
{
	
}
void CBox::draw()
{
	printf("to draw box at %d, %d\n", m_leftTop.x , m_leftTop.y);
	...

}

CCavas()::CCavas()
{
	for(int i = 0; i < 480; i++)
	{
		for ( j ...
			pixes[i][j].red =0;

}

int main()
{
	CCavas c;

	color_t veryRed ;
	veryRed.red = 255;
	veryRed.green = 0;
	veryRed.blue = 0;

	CLine line1(10,10,40,50);
	line1.draw(&c);
	CBox b1(1,1,70,70);
	b1.m_color = 
	b1.draw(&c);
}

// implment draw lines and draw box  
