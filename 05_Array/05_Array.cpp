#include <iostream>
#include<windows.h>

using namespace std;

int main()
{
	/*
	int train[3];//12b
	train[0] = 3;
	train[1] = 1;
	train[2] = 4;
	cout << train[0] << endl;
	cout << train[1] << endl;
	cout << train[2] << endl;
	cout << endl;


	int arr[10];

	const int size = 10;
	int arr2[size];

	int arr3[size] = { 1,2,3,4,5,6,7,8,9,10};
	cout << "Address : "<<  arr3 << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;

	int arr4[] = { 11,12,13,14 };
	for (int i = 0; i < 4; i++)
	{
		cout << arr4[i] << " ";
	}
	cout << endl;
	cout << "Arr5 : ";
	int arr5[size]{ 3,2,1 };
	for (int i = 0; i < size; i++)
	{
		cout << arr5[i] << " ";
	}
	cout << endl;

	//int arr6[2] = { 4,5,6,7 };//Error
	*/
	//const int size = 5;
	//int arr[size];
	//for (int i = 0; i < size; i++)
	//{
	//	cout << "Enter number [" << i << "] - ";
	//	cin >> arr[i];
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;

	//Написати програму, яка знаходить суму всіх від'ємних	значень у масиві.

	//Написати програму, яка знаходить мінімальне й мак -
	//	симальне значення в масиві і виводить їх на екран.

	/*Дана програма, яка визначає останнє додатне і перше
	від'ємне число в масиві. Знайти і виправити синтак-
	сичні й логічні помилки.*/
	const int size = 10;
	int arr[size] = { -23,45,-58,-14,-7,9,32,-4,-8,-6 };
	int sum = 0;
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			sum += arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	int positive = 0;
	for (int i = size-1; i >= 0 ; i--)
	{
		if (arr[i] > 0)
		{
			positive = arr[i];
			break;
		}
	}
	int negative = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			negative = arr[i];
			break;
		}
	}

	cout << "Summa = " << sum << endl;
	cout << "Max = " << max << endl;
	cout << "Min = " << min << endl;
	cout << "First negative  = " << negative << endl;
	cout << "Last Positive = " << positive << endl;

	//1.Оголосити одновимірний масив з 10 елементів типу int.
	// Заповнити його значеннями з клавіатури, вивести на екран та 
	// підрахувати добуток елементів масиву
	//2.Оголосити одновимірний масив з 7 елементів типу int.
	// Заповнити його випадковими значеннями в діапазоні[-12.. + 50] 
	// та вивести на екран.
	// Підрахувати кількість відємних та додатніх елементів масиву.
	//3.Оголосити, проініціалізувати початковими значеннями та вивести 
	// одновимірний масив з 7 елементів типу long.Визначити суму парних елементів масиву
	//4.Утворити одновимірний масив розміром 30. 
	// Заповнити його числами, які є степенями 2: (1, 2, 4, 8, 16, ...).
	// Вивести елементи масиву на екран у прямому і оберненому порядку.
	//5.Дано одновимірний масив.Замінити всі від’ємні елементи їх модулями.



	
	








}
