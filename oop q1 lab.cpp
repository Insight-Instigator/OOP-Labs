#ifndef header1
#define header1
#include <iostream >

class painting 
{
	int cost;
	
public:
	painting()
	{
		cost=10;
	}
	int getcost(int );

};
class shape 
{
protected:
	int length;
	int breadth;
	int height;
	public:
	shape ()
{
	length=10;
	breadth=15;
	height=10;
}
shape (int l,int b,int w)
{
	length=l;
	breadth=b;
	height=w;
}
};


class square :public shape,public painting
{
	 int getArea(int );
};
class rectangle  :public shape,public painting
{
		 int getarea(int);
	};
	class triangle :public shape,public painting
	{
		 int getarea(int);
	};
#endif