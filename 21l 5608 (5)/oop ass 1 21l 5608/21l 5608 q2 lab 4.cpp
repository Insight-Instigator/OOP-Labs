#include <iostream >
using namespace std;
#include <fstream>
class Matrix
{
	int rows;
	int cols;
	public:
	void setA(int R)
	{
	rows=R;
	}
	int getA()
	{
		return rows;
	}
	void setB(int c )
	{
		cols=c;
	}
	int getB()
	{
		return cols;
	}
	int **AlocateMemory(int r,int c)
	{
		int**ptr=nullptr;
		ptr=new int *[rows];
		for(int i=0;i<rows;i++)
		{
			ptr[i]=new int [cols];
		}
		return ptr;
	}
	void inputMemory(int r,int cols, int *ptr)
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<cols;j++)
			{
				cin>>ptr[i];
			}
		}
	}
  void deallocateMemory(int r,int cols,int **ptr )
  {
	  for (int i=0;i<r;i++)
	  {
		  delete [] ptr[i];

	  }
  }
  int **input (char name[10],int**arr)
  {
	  ifstream myfile;
	  myfile.open(name);
	  for (int i=0;i<rows;i++)
	  {
		  for (int j=0;j<cols;j++)
		  { 
			  myfile>>arr[i][j];
		  }
	  }




};
int main(){
	int rows;
	int columns ;
	Matrix object;
	int *arr=nullptr;
	cout<<"please enter the number of rows "<<endl;
	cin>>rows;
	cout<<"please enter the number of columns "<<endl;
	cin>>columns;
	object.setA(rows);
	object.getA();
	object.setB(columns);
	object.getB();
	int** ptr= object.AlocateMemory(rows,columns);
	object.inputMemory(rows,columns,ptr);
	object.deallocateMemory(rows,columns, ptr);
	object.input( name[10],arr)


	system ("pause ");
	return 0;
}







