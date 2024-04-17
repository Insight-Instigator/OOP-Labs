#include <iostream>
using namespace std;
class Teacher {
private:
	int EmployeeID;
	char* Name;
public:

	Teacher();
	Teacher(const Teacher& t);
	Teacher(const int e, const char[]);
	void Print();
	void add_teacher(const int, const char[]);
	~Teacher();

};

Teacher::Teacher()
{
	Name = nullptr;
	EmployeeID = 0;
}

 Teacher::Teacher(const Teacher& t)
{
	 EmployeeID = t.EmployeeID;
	 int len = strlen(t.Name);
	 Name = new char[len + 1];
	 int i = 0;
	 for (; i < len; i++)
	 {
		 Name[i] = t.Name[i];
	 }
	 Name[i] = '\0';
}

Teacher::Teacher(const int e,const char c[])
{
	EmployeeID = e;
	int len = strlen(c);
	Name = new char[len + 1];
	int i = 0;
	for (; i < len; i++)
	{
		Name[i] = c[i];
	}
	Name[i] = '\0';
}
void Teacher::Print()
{
	cout << "Employee ID is : " << EmployeeID << endl;
	cout << "Teacher Name is : " << Name << endl;


}
void Teacher::add_teacher(const int e,const char c[])
{
	EmployeeID = e;
	int len = strlen(c);
	Name = new char[len + 1];
	int i = 0;
	for (; i < len; i++)
	{
		Name[i] = c[i];
	}
	Name[i] = '\0';
}
Teacher::~Teacher()
{
	
	Name = nullptr;
}

class Student {
private:
	char* roll_number;
	char* name;
	Teacher* TeacherList;
	int teacher_count; //no of teachers added in teacher list
public:
	Student();
	Student(const char[],const char[]);//roll num ,name
	 void Add_teacher_for_student(Teacher&);//Teacher
	void print();
	~Student();
};

Student::Student()
{
	roll_number = nullptr;
	name = nullptr;
	TeacherList = nullptr;
	teacher_count = 0;
}

Student::Student(const char  roll[],const char s_name[])
{

	int len = strlen(roll);
	roll_number = new char[len + 1];
	int i = 0;
	for (; i < len; i++)
	{
		roll_number[i] = roll[i];
	}
	roll_number[i] = '\0';

	len = strlen(s_name);
	name = new char[len + 1];
	i = 0;
	for (; i < len; i++)
	{
		name[i] = s_name[i];
	}
	name[i] = '\0';
	teacher_count = 0;
	TeacherList = new Teacher[10];//u can add max 10 teachers against a student
}

void Student::Add_teacher_for_student(Teacher & T)
{
	 
	 TeacherList[teacher_count++]=T;

}

void Student::print()
{
	cout << "Student Name is : " << name << endl;
	cout << "Student Roll no is : " << roll_number << endl;
	if (teacher_count == 0)
		cout << "This student dont have any teacher associated!" << endl;
	else {
		cout << "Teachers Info :" << endl;
		for (int i = 0; i < teacher_count; i++)
		{
			TeacherList[i].Print();
		}
	}
}

Student::~Student()
{
	if(roll_number!=NULL)
	delete[]roll_number;
	if (name != NULL)
	delete[]name;
	if (TeacherList != NULL)
	delete[] TeacherList;
	TeacherList = nullptr;
	roll_number = nullptr;
	name = nullptr;
}

int main()
{
	
	Teacher t1(9, "zaheer");
	Teacher t2(91, "hassan");
	Teacher t3(92, "hussain");
	Teacher t4(93, "abdullah");
	Student s1("21L-1234", "Ali Ahmad");
	s1.print();
	s1.Add_teacher_for_student(t1);
	s1.Add_teacher_for_student(t2);
	s1.Add_teacher_for_student(t3);
	s1.Add_teacher_for_student(t4);
	s1.print();



	system("pause");
	return 0;
}