#include <iostream >
using namespace std ;
int** allocate_memory(int&r,int&col)
{
	int** arr=nullptr;
	arr=new int *[r];
	for(int i=0;i<r;i++)
	arr[i]=new int [col];
	cout<<"array memory has been allocated ";
	return arr;
}
void input_matrix(int**matrix,const int rows,const int cols )
{
	cout<<"taking the input in the array ";
	for (int i=0;i<rows ;i++)
	{
		for (int j=0;j<cols;j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<endl;
}

void display_matrix(int**matrix,const int& rows,const int& cols)
{ 
	cout<<"the matrix int the correct format is "<<endl;
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			cout<<matrix[i][j];
			cout<<"  ";

		}
		cout<<endl;
	}
}
//int *maxcol(int**matrix,int rows,int cols)
//{
//	int *p=nullptr;
//	p=new int [cols];
//	int min= matrix[0][0];
//	for (int i=0;i<cols;i++)
//	{




void deallocate_memory(int** matrix,const int &rows)
{
	for (int i=0;i<rows;i++)
	{
		delete  [] matrix[i];
	}
	cout<<"the memory has been deallaocated ";
}


int main ()

{
	int rows ;
	int columns ;
	cout<<"enter the rows ";
	cin>>rows;
	cout<<"enter the number of columns  ";
	cin>>columns;
	int**p=allocate_memory(rows,columns);
	input_matrix(p,rows,columns);
	
	display_matrix(p,rows,columns);
	//int* maxcolvalues=maxcol(p,rows,columns);
	deallocate_memory(p,rows);

    system ("pause ");
	return 0;
}













