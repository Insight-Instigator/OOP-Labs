#include <iostream>
#include <string>
using namespace std;
class MyFirstClass
{
private:
	int rollno;
	string name;
	string cnic;
	string degree;
	string adress;


public:
	void setA(int RL)
	{
		rollno=RL;
	}
	int getA()
	{
		return rollno;
	}
	void setB(string N)
	{
		name=N;
	}
	string getB()
	{
		return name;
	}
	void setC(string ID)
	{
		cnic=ID;
	}
	string getc()
	{
		return cnic;
	}
	void setd(string DEG)
	{
		degree=DEG;
	}
	string  getd()
	{
		return degree ;
	}
	void setE(string ADR)
	{
		adress=ADR;
	}
	string getE()
	{
		return adress ;
	}


};
int main ()
{
	MyFirstClass object;
	int rollno;
	string name;
	string cnic;
	string degree;
	string adress;
	cout<<"please enter your ROLL NO :";
	cin>>rollno;
	cout<<"please enter your name :";
	cin.ignore();
	getline(cin,name);
	cout<<"please enter your cnic :";
	cin>>cnic;
	cout<<"please enter your degree  :";
	cin.ignore();
	getline(cin,degree);
	cout<<"please enter your adress :";
	cin.ignore();
	getline(cin,adress);
	object.setA(rollno);
	cout<<"the ROLL NO IS "<<object.getA()<<endl;
	object.setB(name);
	cout<<"the NAME IS "<<object.getB()<<endl;
	object.setC(cnic);
	cout<<"THECNIC IS  "<<object.getc()<<endl;
	object.setd(degree);
	cout<<"THE  DEGREE IS "<<object.getd()<<endl;
	object.setE(adress);
	cout<<"THE ADRESS IS "<<object.getE()<<endl;


	system ("pause");
	return 0;
}

