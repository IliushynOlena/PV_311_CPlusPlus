#include <iostream>
using namespace std;

int main()
{
	/*
	int i = 0;
	while (i < 10)
	{
		cout << "Hello world" << endl;
		i++;
	}

	cout << "********************" << endl;
	//1
	for (int i = 0; i < 10; i++)
	{
		cout << "Hello world" << endl;
	}
	*/
	//2
	int x;
	/*for (x = 0; x <= 10; x++)
	{
		if (x % 2 == 0)
			cout << x << " ";
	}*/
	/*
	for (x = 0; x <= 10; x+=2)
	{
		cout << x << " ";
	}
	cout << endl;
	float y = 0;
	for (    ; y <= 1; y+=0.2)
	{
		cout << y << " ";
	}
	cout << endl;
	for (int i = 1; i <= 5;)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;
	
	for (int i = 0;  ; i++)
	{
		cout << i << " ";
		if (i == 10)break;
	}
	cout << "Bye!!!" << endl;


	int magicNumber = 2;
	cout << "======================================" << endl;
	cout << "      My magic number between 1 and 10"<< endl;
	cout << "======================================" << endl;
	int user = 0;

	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter number ----> ";
		cin >> user;
		if (user == magicNumber)
		{
			cout << "Congratulation !!!" << endl;
			break;
		}
		else
		{
			cout << "That is not my number !" << endl;
		}
		if (i == 5) 
		{
			cout << "Loser ! Try again  " << endl;
		}
	}
	cout<<endl;
	

	for (int i = 1; i < 26; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
	
		cout << i << " ";
	}


	int sum = 0;
	for (int i = 1; i <= 12; i++)
	{
		sum += i;
	}
	cout << endl<< "Summa = " << sum << endl;
	*/





	/*
	for (int i = 1; i <= 10; i++)
	{
		for (int  j= 1;  j <= 10;j ++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	*/
	/*
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		for (int i = 0; i < 20; i++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	cout << endl; 
	int str = 1;
	int star_count;
	int length = 20;
	while (str <= length)
	{
		star_count = 1;
		while (star_count <= length)
		{
			cout << " * ";
			star_count++;
		}
		cout << endl;
		str++;
	}
	*/
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << " + ";
		}
		cout << endl;
	}
	cout << endl; cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "# ";
		}
		cout << endl;
	}*/
	int N = 4;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
				cout << " + ";
			else
				cout << " = ";
		}
		cout << endl;
	}
	cout << endl; cout << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i + j == N - 1)
				cout << " # ";
			else
				cout << "   ";
		}
		cout << endl;
	}

	N = 10;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i >= j && i + j >= N - 1)
				cout << "|===|";
			else
				cout << "     ";
		}
		cout << endl;
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 3 && j == 5)
				cout << "     ";
			else 
				cout << "|###|";
		}
		cout << endl;
	}

}

