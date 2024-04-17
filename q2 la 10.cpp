#include <iostream >
using namespace std ;
class basicshape
{
	double area;
public:
   void setarea(int a)
   {
	   area=a;
   }
	double GetA()
	{
		return area;
	}
	virtual void calarea()=0;
};
	class circle : public basicshape 
	{
		long x_coordinate;
		long y_coordinate;
		double radius ;
	public:
		
	circle(long  x=3, long y=2,double r=6 ){
			x_coordinate=x;
			y_coordinate=y;
			radius=r;
		}
		long getcenterx ()
		{
			return x_coordinate;
		}
		long getcentrey()
		{
			return y_coordinate;
		}
		void calarea()
		{
			setarea(3.14159*radius*radius);
			cout<<"THE AREA OF THE CIRCLE IS "<<GetA()<<endl;
		}
	};
	class rectangle : public basicshape
	{
		
		long length;
		long width;
	public:
		rectangle(long l,long w)
		{
			length=l;
			width=w;
		}
	long getlength(long l)
	{
		return length;
	}
	long getwidth(long w)
	{
		return width;
	}
	void  calarea()
	{
		setarea(length*width);
			cout<<"THE AREA OF THE RECTANGLE IS "<<GetA()<<endl;
	}
	};
	int main ()
	{
		long x;
		long y;
		long len;
		long width;
		long rad;
		cout<<"please enter the x coordinate "<<endl;
		cin>>x;
		cout<<"please enter the y coordinate "<<endl;
		cin>>y;
		cout<<"please enter the radius  "<<endl;
		cin>>rad;
		cout<<"please enter the length "<<endl;
		cin>>len;
		cout<<"please enter the width "<<endl;
		cin>>width;
	circle obj(x,y,rad);
	rectangle obj2 (len,width);
	obj.calarea();
	obj2.calarea();
	system ("pause ");
	return 0;
	}