#include<iostream>
using namespace std;
class Date_of_birth
{
	int date;
	int year;
	int month;
public:
	class Irrelivantoutputs
	{
	public:
		Irrelivantoutputs() 
		{

		}
		
	};
	Date_of_birth() {}
	~Date_of_birth() {}
	void setDate(int Date) {
		if (Date <= 0 || Date >= 31) {
			date = 0;
			throw Irrelivantoutputs();
		}
		else
		{
			date = Date;
		}
	}
	void setMonth(int Month) {
		if (Month <= 0 || Month > 12) {
			month = 0;
			throw Irrelivantoutputs();
		}
		else
		{
			month = Month;
		}
	}
	void setYear(int Year) {
		if (Year <= 0 || Year > 2022) {
			year = 0;
			throw Irrelivantoutputs();
		}
		else
		{
			year = Year;
		}
	}
	int getDate() {
		return date;
	}
	int getMonth() {
		if (month==1)
		{
			cout<<"JANUARY";
		}
		if (month==2)
		{
			cout<<"FEBRUARY";
		}
		if (month==3)
		{
			cout<<"MARCH";
		}
		if (month==4)
		{
			cout<<"APRIL";
		}
		if (month==5)
		{
			cout<<"MAY";
		}
		if (month==6)
		{
			cout<<"JUNE";
		}
		if (month==7)
		{
			cout<<"JULY";
		}
		if (month==8)
		{
			cout<<"AUGUST";
		}
		if (month==9)
		{
			cout<<"SEPTEMBER ";
		}
		if (month==10)
		{
			cout<<"OCTOBER";
		}
		if (month==11)
		{
			cout<<"NOVEMBER";
		}
		if (month==12)
		{
			cout<<"DECEMBER";
		}
		
		return month;
	}

	int getYear() {
		return year;
	}
};
int main()
{
	Date_of_birth obj;
	int day, month, year;
	cout << "Enter year : ";
	cin >> year;
	cout << "Enter month : ";
	cin >> month;
	cout << "Enter day : ";
	cin >> day;
	

	try
	{
		obj.setMonth(month);
	}
	catch (Date_of_birth::Irrelivantoutputs) {
		cout << "Invalid month entered" << endl;
	}
	
	try {
		obj.setYear(year);
	}
	catch (Date_of_birth::Irrelivantoutputs) {
		cout << "Invalid year entered" << endl;
	}
	try {
		obj.setDate(day);
	}
	catch (Date_of_birth::Irrelivantoutputs) {
		cout << "Invalid day entered" << endl;
	}
	cout << "Your Date of birth is :" << obj.getDate() << "/" << obj.getMonth() << "/" << obj.getYear();
	system ("pause ");
	return 0;
}
