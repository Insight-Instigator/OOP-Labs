#include <iostream > 
#include <string >
using namespace std;
class ship
{
	string Sname;
	string Byear;
public:
	
	ship(string n="TITanic ",string y="1976")
	{
   Sname=n;
   Byear=y;
	}
	 void SETA  (string name )
	{
		Sname=name;
	 }
	 string getA ()
	 {
		 return Sname ;
	 }
		void SETB  (string year )
	{
		Byear=year;
	 }
	 string getB ( )
	 {
		 return Byear ;
	 }

	  virtual void print ()
	 {
		 cout<<"the name of the ship is "<<Sname<<endl;
		 cout<<"the year it was build was " <<Byear<<endl;
	 }
};
class cruiseship:public ship

{
	int maxpassengers;
public:
	cruiseship (int m=10)
	{
		maxpassengers=m;
	}
	void SETAb (int maxpass)
	{
		maxpassengers=maxpass;
	}
	int Ab()
	{
		return maxpassengers ;
	}
	  void print ()
	{
		cout<<"the name of the ship is "<<getA() <<endl;
		cout<<"the maximum number of the passengers "<< maxpassengers<<endl;
	}
};
class cargoship:public ship 
{
	int cargocapacity;
public:
	cargoship (int t=10)
	{
		cargocapacity=t;
	}
	 void setbc(int tons)
	 {
		 cargocapacity=tons;
	 }
	 int getbc ()
	 {
		 return cargocapacity ;
	 }

	 	void print ()
	{
		cout<<"the name of the ship is "<<getA()<<endl;
		cout<<"the maximum number numbers of tons it can carry "<<  cargocapacity <<endl;
	}

};

int main ()
{
	string shipname ;
	string  year;
	int maxpassangers;
	int tons;
	cout<<"enter the ship name "<<endl;
	cin>>shipname ;
	cout<<"please enter the built year "<<endl;
	cin>>year;
	cout<<"please enter the maxpassengers "<<endl;
	cin>>maxpassangers;
	cout<<"please enter the tons "<<endl;
	cin>>tons;


	ship* ptr[3];
	ptr[0]=new ship (shipname,year);
	ptr[1]=new cruiseship (maxpassangers);
	ptr[2]=new cargoship (tons);
	for (int i=0;i<3;i++)
	{
		ptr[i]->print();
	}
	
	system ("pause ");
	return 0;
}
