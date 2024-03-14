#include <iostream>
#include"Test.h"
using namespace std;

void Hello()
{
	cout << "Hello world ! " << endl;
}

void AnyLine(char symbol, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << symbol << " ";
	}
	cout << endl;
}
int Pow(int num, int pow)
{
	int res = 1;
	for (int i = 0; i < pow; i++)
	{
		res *= num;
	}
	return res;
}
int Max(int a, int b)
{
	/*if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}*/

	return (a > b) ? a : b;
}
int Min(int a, int b)
{
	return (a < b) ? a : b;
}
void Second()
{
	cout << " Second function " << endl;
}

void First()
{
	cout << "Begin first function " << endl;
	Second();
	cout << "End first function " << endl;
}
void Change(int a, int b)
{
	cout << "One = " << a << " Two = " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "One = " << a << " Two = " << b << endl;
}
void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int Summa(int arr[], int size)
{
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += arr[i];
	}
	return summa;
}
void InitMatrix(int arr[][7], int row, int col);//prototype function
void ShowMatrix(int arr[][7], int row, int col);//prototype function
int SummaMatrix(int arr[][7], int row, int col);//prototype function

int A = 100;//global variable
int B = 111;

void printA()
{
	cout << " A : " << A << endl;
}
void SetA()
{
	A = 99;
}
void SetSecondA()
{
	int A = 77;
	cout << " A : " << A << endl;
}
void Star(int count = 20)
{
	for (int i = 0; i < count; i++)
	{
		cout << "*" << " ";
	}
	cout << endl;
}
//void foo(int i, int j = 7)
//{
//	cout << i << " " << j << endl;
//}
//void foo(int i, int j = 2, int k)//error
//{
//	cout << i << " " << j  << " "<< k << endl;
//}
void foo(int i = 1,  int k  = 3 ,int j = 2 )//error
{
	cout << i << " " << j << " " << k << endl;
}

int main()
{
	SomeFunction();
	SomeFunction();
	SomeFunction();




	foo(5, 8, 9);
	foo(9,1);
	foo(10);
	foo();



	Star(10);
	Star(5);
	Star(1);
	Star();


	printA();
	SetA();
	printA();
	SetSecondA();
	printA();

	int A = 10;//local variable
	cout << "local  A : " << A << endl;
	cout << "global  A : " <<  ::A << endl;
	cout << "B = "<<  B << endl;
	printA();
	if (A > 50)
	{
		int b = 77;
		
		cout << b << endl;
		cout << "B = " << B << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
		cout << "B = " << B << endl;
	}

	cout << A << endl; 
	cout << "B = " << B << endl;
	//cout << i << " ";
	//cout << b << endl;

	/*
	srand(time(0));
	const int row = 5;
	const int col = 7;
	int matrix[row][col];
	InitMatrix(matrix, row, col);
	ShowMatrix(matrix, row, col);
	cout << "Summa = " <<  SummaMatrix(matrix, row, col)<<endl;


	const int size = 10;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);
	cout << "Summa = " << Summa(arr, size) << endl;
	*/
	/*
	int a = 5, b = 7;
	cout << "One in main before change = " << a << " Two in main = " << b << endl;
	Change(5, 7);
	cout << "One in main after change = " << a << " Two in main = " << b << endl;


	
	First();
	cout << "Max = " << Max(10, 55) << endl;

	cout << "Max = " << Max(77, 4) << endl;
	cout << "Max = " << Max(22, 22) << endl;
	cout << "Min = " << Min(10, 55) << endl;
	cout << "Min = " << Min(10, 7) << endl;
	Pow(2, 5);
	cout << "Pow 2*5 = " << Pow(2, 5) << endl;
	int pow = Pow(2, 5);
	cout << "Res pow = " << pow << endl;
	Hello();
	Hello();
	Star(3);
	Star(10);
	Star(15);
	AnyLine('+' ,10);
	AnyLine('=',20);
	*/



}

void InitMatrix(int arr[][7], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 50 + 10;
		}
	}
}
void ShowMatrix(int arr[][7], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int SummaMatrix(int arr[][7], int row, int col)
{
	int summa = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			summa += arr[i][j];
		}
	}
	return summa;
}

