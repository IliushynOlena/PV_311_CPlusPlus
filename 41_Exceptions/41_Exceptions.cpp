#include <iostream>
//#include <exception>
using namespace std;

class List
{
private :
    int size;
public:
	List():size(0){}
	List(int size):size(size){}

	int GetFromPosition(int pos)// 2
	{
		//1 - code - collection is empty
		if (size == 0) return 1;
		//2 - code - out of range
		if (pos < 1 || pos > size) return 2;

		return rand() % 10;
	}
};
float Divide(float a, float b)
{
	//try catch throw
	//exception ex("Divide by zero");
	float res = 0;
	if (b == 0)
	{
		cout << "You can't divide by zero" << endl;
		throw exception("Divide by zero");
		//throw ex;
	}
	else if (b == 2)
	{
		throw 404;
	}
	else if (b == 5)
	{
		throw "Divide by 5 ";
	}		 
	else
	{
		res = a / b;
		cout << "Res in function = " << res << endl;
		return res;
	}
	
}
class PasswordInvalidEcxeption : public exception
{
public:
	PasswordInvalidEcxeption(const char* ex) :exception(ex) {}
};
class PasswordSmallException : public exception
{
	int length;
public:
	PasswordSmallException(const char * ex, int lenght): length(lenght),exception(ex){}
	void Message()const
	{
		cout << what() << endl;
		cout << "Actual length : " << length << endl;
	}
};

void Login(const char* login, const char* password)
{
	if (strlen(password) < 6)
		throw PasswordSmallException( "To small password", strlen(password));
	if (!isalpha(login[0]) || !isupper(login[0]))
		throw exception("login is invalid");
	if (!isalpha(password[0]) || !islower(password[0]))
		throw PasswordInvalidEcxeption("Passworrd invalid");

	cout << "Loading..........." << endl;
}


int main()
{
	char login[100];
	char password[100];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter login : "; cin >> login;
		cout << "Enter password : "; cin >> password;

		try
		{
			Login(login, password);
		}		
		catch (PasswordInvalidEcxeption ex)
		{
			cout << "Invalid password...... do something...." << endl;
			cout << ex.what() << endl;
			cout << "a-z, 0-9" << endl;
		}
		catch (PasswordSmallException ex)
		{
			cout << "Small password...... do something...." << endl;
			ex.Message();
			cout << "Length must be more than 6 symbols" << endl;
		}
		catch (exception ex)
		{
			cout << "General error ......" << endl;
			cout << ex.what() << endl;
		}
		catch (...)
		{
			cout << "Unknown exception" << endl;
		}
		
	}




	float a, b;
	cout << "Enter a and b : ";
	cin >> a >> b;

	try
	{
		float res = Divide(a, b);
		cout << "Res in main = " << res << endl;
	}
	catch (exception ex)
	{
		cout << ex.what() << endl;
	}
	catch (int ex)
	{
		cout << ex << endl;
	}
	catch (const char * ex)
	{
		cout << ex << endl;
	}
	catch (...)
	{
		cout << "Unknown exception" << endl;
	}
	cout << "Continue....................." << endl;
	cout << "Continue....................." << endl;
	cout << "Continue....................." << endl;
	cout << "Continue....................." << endl;


	

















}

