#include<iostream>
using namespace std;
class Point {
	   int x;
	   int y;
public:
	////calling the default constructor 
	   Point(int i=0,int j=0)
	   {
		  x=i;
		  y=j;
			cout<<"point () is  called"<<endl;
	   }
	   ///printing the coordinates 
	  void print()
	   {
		   cout<<"the coordinates of the point of x and y = ("<<x<<","<<y<<")"<<endl;
	   }
	  ///calling the destructor of the first class 
	   ~Point()
	   {
		   cout<<"~point () destructor  called  "<<endl;
	   }
};
class circle{
	Point midpoint ;
	float radiusofcircle;
public:
	
	circle(int x,int y,float z):midpoint(x,y) 
	{
		midpoint=z;
		
		cout<<" circle called () <<endl";			 
	}
	  ~circle()
	  {
		  cout<<"~circle() destructor  called "<<endl;
	  }
	 void print()
	 {
		 midpoint .print();
		 cout<<"radius of the circle  is : "<<radiusofcircle;

	 }		
};
class quadiletral
{
	Point w,x,y,z;
	
public:

	quadiletral(int i,int j,int k,int l,int m,int n,int o,int p):w(i,j),x(k,l),y(m,n),z(o,p)

	{
		cout<<"quadiletral() has been  called "<<endl;
	}

	~quadiletral(){
		cout<<"~quadiletral() destructor has been called "<<endl;
	}
	void print()
	{
		
	    w.print();
		x.print();
		y.print();
		z.print();
	}
};
int main(){
	circle cir(3,4,2.5);
	cir.print();
	quadiletral quad(1,0,0,1,1,1,0,0);
	quad.print();
	system ("pause ");
	return 0;
}