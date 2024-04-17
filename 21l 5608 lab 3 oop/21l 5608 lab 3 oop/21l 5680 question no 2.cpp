
#include <iostream >
#include <fstream >
using namespace std ;
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
	int *p=nullptr;
	int rows;
	fstream myfile;
	myfile.is_open("sparse.txt",ios::in);

deallocate_memory(p,rows);
}
system ("pause ");
return 0;
}
	system ("pause ");
	return 0;
}