#include <iostream>
using namespace std;

int main()
{
	/*
	int day;
	cout << "Enter day : ";
	cin >> day;//5
	if (day == 1)
	{
		cout << "Monday" << endl;
	}
	else if (day == 2)
	{
		cout << "Tuesday" << endl;
	}
	else if (day == 3)
	{
		cout << "Wednesday" << endl;
	}
	else if (day == 4)
	{
		cout << "Thursday" << endl;
	}
	else if (day == 5)
	{
		cout << "Friday" << endl;
	}
	else
	{
		cout << "Error number of day " << endl;
	}

	cout << "Enter day : ";
	cin >> day;//1
	switch (day)//day = key 
	{
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	default:
		cout << "Error number of day " << endl;
		break;
	}
	

	float a, b, res;
	char key;
	cout << "Enter number a : ";
	cin >> a;
	cout << "Enter number b : ";
	cin >> b;
	cout << " [+] - Add numbers " << endl;
	cout << " [-] - Sub numbers " << endl;
	cout << " [*] - Multy numbers " << endl;
	cout << " [/] - Div numbers " << endl;
	cout << "Enter your choice : ";	
	cin >> key;//+
	if (key == '+')
	{
		res = a + b;
		cout << a << " + " << b << " = " << res << endl;
	}	
	else if (key == '-')
	{
		res = a - b;
		cout << a << " - " << b << " = " << res << endl;
	}
	else if (key == '*')
	{
		res = a * b;
		cout << a << " * " << b << " = " << res << endl;
	}	
	else if (key == '/')
	{
		res = a / b;
		cout << a << " / " << b << " = " << res << endl;
	}
	else
	{
		cout << "Error choice" << endl;
	}
	

	switch (key)//key ==> char or int, long, short , long long
	{
	
	case '+':
		res = a + b;
		cout << a << " + " << b << " = " << res << endl;
		break;
	case '-':
		res = a - b;
		cout << a << " - " << b << " = " << res << endl;
		break;	
	case '*':
		res = a * b;
		cout << a << " * " << b << " = " << res << endl;
		break;
	case '/':
		res = a / b;
		cout << a << " / " << b << " = " << res << endl;
		break;
	//default:
	//	cout << "Error choice" << endl;
	//	//break;

	}

	

	int month;
	cout << "Enter month : " ; 
	cin >> month;
	switch (month)
	{
	case 1:case 2:case 12:
		cout << "Winter " << endl;
		break;
	case 3:case 4:case 5:
		cout << "Spring " << endl;
		break;
	case 6:case 7:case 8:
		cout << "Summer " << endl;
		break;
	case 9:	case 10:case 11:
		cout << "Autumn " << endl;
		break;
	default:
		cout << "Error choice " << endl;
		break;
	}
	*/
	//const int USA = 1;
	//const int Ukraine = 380;
	//const int Italy = 39;
	//const int Poland = 48;
	//const int Australia = 61;
	//enum
/*
	enum Countries { USA = 1 , Ukraine = 380, Italy = 39, Poland = 48, Australia = 61};
	cout << USA << endl;
	cout << Ukraine << endl;
	cout << Italy << endl;

	enum coins{penny = 1, nickel = 2, dime = 10, quarter = 25, half = 50,
	large_dollar = 100};

	enum menu{ AddNewItem = 1, ShowAll, DeleteOne, Search = 10, Sort};
	cout <<"AddNewItem "<<  AddNewItem << endl;
	cout << "ShowAll "<<  ShowAll << endl;
	cout << "DeleteOne "<< DeleteOne << endl;
	cout << "Search "<< Search << endl;
	cout <<"Sort "<< Sort << endl;

	int coin;
	cout << "Enter the value of American coin ";
	cin >> coin;//10
	switch (coin)
	{
	case penny:
		cout << "Penny = 1 cent" << endl;
		break;
	case nickel:
		cout << "Nickel = 2 cent" << endl;
		break;
	case dime:
		cout << "Dime = 10 cent" << endl;
		break;
	case quarter:
		cout << "Quarter = 25 cent" << endl;
		break;
	case half:
		cout << "Half = 50 cent" << endl;
		break;
	case large_dollar:
		cout << "Large dollar = 100 cent" << endl;
		break;
	default:
		cout << "Not found" << endl;
		break;
	}
*/
	//while
	//for
   //do while
	/*int counter = 0;
	while (counter < 7)
	{
		++counter;
		cout << " You have seen " << counter << " Wonder of world" << endl;
	}
	cout << "Now , you can begin write your essay !!!!" << endl;*/

	float a, b, res;
	int key;	
	
	/*while (key != 0)
	{	
		switch (key)
		{
		case 0:
			cout << "Good Bye!!!" << endl;
			break;
		case 1:
			cout << "Enter number a : ";
			cin >> a;
			cout << "Enter number b : ";
			cin >> b;
			res = a + b;
			cout << a << " + " << b << " = " << res << endl;
			break;
		case 2:
			cout << "Enter number a : ";
			cin >> a;
			cout << "Enter number b : ";
			cin >> b;
			res = a - b;
			cout << a << " - " << b << " = " << res << endl;
			break;
		case 3:
			cout << "Enter number a : ";
			cin >> a;
			cout << "Enter number b : ";
			cin >> b;
			res = a * b;
			cout << a << " * " << b << " = " << res << endl;
			break;
		case 4:
			cout << "Enter number a : ";
			cin >> a;
			cout << "Enter number b : ";
			cin >> b;
			res = a / b;
			cout << a << " / " << b << " = " << res << endl;
			break;
			default:
				cout << "Error choice" << endl;
				break;

		}
		cout << " [1] - Add numbers " << endl;
		cout << " [2] - Sub numbers " << endl;
		cout << " [3] - Multy numbers " << endl;
		cout << " [4] - Div numbers " << endl;
		cout << " [0] - Exit " << endl;
		cout << "Enter your choice : ";
		cin >> key;
	}*/
	do
	{
		cout << " [1] - Add numbers " << endl;
		cout << " [2] - Sub numbers " << endl;
		cout << " [3] - Multy numbers " << endl;
		cout << " [4] - Div numbers " << endl;
		cout << " [0] - Exit " << endl;
		cout << "Enter your choice : ";
		cin >> key;
		switch (key)
		{
		case 0:
			cout << "Good Bye!!!" << endl;
			break;
		case 1:
			cout << "Enter number a : ";
			cin >> a;
			cout << "Enter number b : ";
			cin >> b;
			res = a + b;
			cout << a << " + " << b << " = " << res << endl;
			break;
		case 2:
			cout << "Enter number a : ";
			cin >> a;
			cout << "Enter number b : ";
			cin >> b;
			res = a - b;
			cout << a << " - " << b << " = " << res << endl;
			break;
		case 3:
			cout << "Enter number a : ";
			cin >> a;
			cout << "Enter number b : ";
			cin >> b;
			res = a * b;
			cout << a << " * " << b << " = " << res << endl;
			break;
		case 4:
			cout << "Enter number a : ";
			cin >> a;
			cout << "Enter number b : ";
			cin >> b;
			res = a / b;
			cout << a << " / " << b << " = " << res << endl;
			break;
		default:
			cout << "Error choice" << endl;
			break;

		}
		
	} while (key != 0);


	//switch
	//1. Дано країна.Вивести назву столиці. (5 countries)
	//2.Дано номер дня тижня(1 – понеділок і т.д.).Визначити чи це вихідний день.
	//3.Дано курс корабля(північ, південь, захід, схід).Як 
	// зміниться курс корабля після команди «назад» ?
	//4.Дано тварина(номер тварини. 1 – жираф. 2 – орел.тощо). (7 animals)
	// Вивести клас, до якого відноситься тварина(хижак, травоїдна).



}

