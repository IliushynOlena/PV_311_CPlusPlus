#include <iostream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
	char month_name[20];
};

struct Person
{
	char name[50];//50b
	char lastname[50];
	float height;
	float weight;
	float footSize;
	int salary;
	char position[50];
	Date birthday;
	Date hireDate;
};
void ShowDate(Date d)
{
	cout << d.day << " ";
	cout << d.month << " ";
	cout << d.year << " ";
	cout << d.month_name << endl;
}
Date CreateNewDate()
{
	Date temp;
	cout << "Day ? ";
	cin >> temp.day;
	cout << "Month ? ";
	cin >> temp.month;
	cout << "Year ? ";
	cin >> temp.year;
	cout << "Month name ? ";
	cin >> temp.month_name;
	return temp;

}
int main()
{
	Date test;
	test = CreateNewDate();
	ShowDate(test);
	Date independencyDay = { 24,8,2024,"August" };
	ShowDate(independencyDay);

	Date* ptr = nullptr;
	ptr = &independencyDay;
	cout << ptr->day <<  " ";
	cout << ptr->month << " ";
	cout << ptr->year << " ";
	cout << ptr->month_name << endl;

	Date newDay;
	newDay = independencyDay;
	ShowDate(newDay);
	
	/*Person Nick;
	cout << "Enter name : "; cin >> Nick.name;
	cout << "Enter lastname : "; cin >> Nick.lastname;
	cout << "Enter height : "; cin >> Nick.height;
	cout << "Enter weight : "; cin >> Nick.weight;
	cout << "Enter foot size : "; cin >> Nick.footSize;
	cout << "Enter salary : "; cin >> Nick.salary;
	cout << "Enter position : "; cin >> Nick.position;
	cout << "Day birtday  ? ";	cin >> Nick.birthday.day;
	cout << "Month birtday  ? ";cin >> Nick.birthday.month;
	cout << "Year birtday  ? ";	cin >> Nick.birthday.year;
	cout << "Month name birtday  ? ";	cin >> Nick.birthday.month_name;
	cout << "Day hireDate  ? ";	cin >> Nick.hireDate.day;
	cout << "Month hireDate  ? "; cin >> Nick.hireDate.month;
	cout << "Year hireDate  ? ";	cin >> Nick.hireDate.year;
	cout << "Month name hireDate  ? ";	cin >> Nick.hireDate.month_name;
	cout << Nick.name << " " << Nick.lastname << endl;
	cout << Nick.height << " x " << Nick.weight << " " << Nick.footSize << endl;
	cout << "Salary " << Nick.salary << endl;
	cout << "Birthday : " << Nick.birthday.day << "." << Nick.birthday.month << "."
		<< Nick.birthday.year << "." << Nick.birthday.month_name << endl;
	cout << "Hiredate : " << Nick.hireDate.day << "." << Nick.hireDate.month << "."
		<< Nick.hireDate.year << "." << Nick.hireDate.month_name << endl;*/




	//int dayBirthday = 25;//variable
	//int monthBirthday = 12;
	//int yearBirthday = 2000;
	////int dayB[3] = { 25,12,2000 , "December"};//error
	//Date myBirthday = { 25,12,2000, "December" };//object
	//cout << "============== My Birthday =================" << endl;
	//cout << "Day : " << myBirthday.day << endl;
	//cout << "Month : " << myBirthday.month << endl;
	//cout << "Year : " << myBirthday.year << endl;
	//cout << "Month name : " << myBirthday.month_name << endl;
	//cout << "============== My Friend*s Birthday =================" << endl;
	//Date friendBirthday;
	//cout << "Day ? ";
	//cin >> friendBirthday.day;
	//cout << "Month ? ";
	//cin >> friendBirthday.month;
	//cout << "Year ? ";
	//cin >> friendBirthday.year;
	//cout << "Month name ? ";
	//cin >> friendBirthday.month_name;

	//cout << "============== My Friend*s Birthday =================" << endl;
	//cout << "Day : " << friendBirthday.day << endl;
	//cout << "Month : " << friendBirthday.month << endl;
	//cout << "Year : " << friendBirthday.year << endl;
	//cout << "Month name : " << friendBirthday.month_name << endl;





}

