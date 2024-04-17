#include <iostream >
using namespace std ;
class faculty 
{
public:
	 virtual void print ()
	{

	cout<<"class name is faculty "<<endl;
	}
};
class teacher : public virtual faculty
{
	 void print ()
	{

	cout<<"class name is teacher"<<endl;
	}
};
class administrator :public  virtual faculty
{
	void print ()
	{

	cout<<"class name is administrator "<<endl;
	}

};
class administratorteacher :public administrator,public teacher,public faculty
{
	void print ()
	{

	cout<<"class name is administrator teacher "<<endl;
	}
};

int main ()
{ 
	faculty**arr=nullptr;
	arr= new faculty *[3];
	arr[0]=new teacher ;
	arr[1]=new administrator;
	arr[2]=new administratorteacher;
	for (int i=0;i<3;i++)
	{
		arr[i]->print();
	}

	system ("pause");
}