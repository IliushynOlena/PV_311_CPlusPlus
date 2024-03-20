#include <iostream>
using namespace std;
void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int LinearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return -1;
}
void SelectSort(int arr[], int size)
{
	//3 8 9 6 4 7
	int temp, index;
	for (int i = 0; i < size; i++)
	{
		//i = 2;
		index = i;//0
		temp  = arr[i];//4

		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < temp) 
			{
				temp = arr[j];//3
				index = j;//4
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;

		}

	}
}
void BubbleSort(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)//10
	{
		for (int j = size-1; j > i; j--)
		{
			//2 3 4 5 6 8 9 9
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void ShakerSort(int arr[], int size)
{
	int j, index = size - 1;//9
	int left = 1, right = size - 1;
	int temp;
	do
	{
		for ( j = right; j >= left; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				index = j;//0
			}
		}
		left = index + 1;
		for (j = left; j <= right; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				index = j;//9
			}
		}
		right = index - 1;
	} while (left < right);

}
void InsertSort(int arr[], int size)
{
	//11 4 2 7 3 11 8 9 6 
	int temp;
	int j;
	for (int i = 0; i < size; i++)
	{
		//i = 1;		
		temp = arr[i];//4
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			//j = 0
			//arr[j + 1] = 4
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}

}

void Hello(int a)
{
	if (a < 0)return;//return == break
	cout << "Hello : " << a  << endl;
	a--;
	Hello(a);
}
int Foo(int a)
{
	if (a < 1)return 0;//return == break
	cout << "Number : " << a << endl;
	a--;
	return Foo(a);
}
int SummaArray(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int SummaRecursion(int arr[], int size, int i)
{
	//5 7 8 9 6 
	if (i + 1 == size)
		return arr[i];
	return arr[i] + SummaRecursion(arr, size, i + 1);
}
void QuickSort(int arr[], int B, int E)
{
	int i = B, j = E;
	int temp, p;
	p = arr[(B + E) / 2];
	do
	{ 
		while (arr[i] < p)i++;
		while (arr[j] > p) j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);
	if (B < j)QuickSort(arr, B, j);
	if (i < E)QuickSort(arr, i, E);
}
int BinarySearch(int arr[], int size, int key)
{
	int B = 0, E = size - 1;
	while (true)
	{
		int p = (B + E) / 2;
		if (key > arr[p])
		{
			B = p + 1;
		}
		else if (key < arr[p])
		{
			E = p - 1;
		}
		else if (key == arr[p])
			return p;

		if (B > E)return -1;

	}
}
int main()
{
	//Hello(10);
	Foo(4);
	Foo(4);
	Foo(4);
	Foo(4);
	Foo(4);
	Foo(4);
	Foo(4);
	srand(time(0));
	const int size = 20;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);
	//cout << "Summa without recursion = " << SummaArray(arr, size) << endl;
	//cout << "Summa wit recursion = " << SummaRecursion(arr, size,0) << endl;
	//SelectSort(arr, size);
	//BubbleSort(arr, size);
	//ShakerSort(arr, size);
	//InsertSort(arr, size);
	QuickSort(arr, 0, size - 1);
	ShowArray(arr, size);
	int searchKey, indexFind;
	cout << "Enter key to search : ";
	cin >> searchKey;

	//indexFind = LinearSearch(arr, size, searchKey);
	indexFind = BinarySearch(arr, size, searchKey);
	if (indexFind != -1)
	{
		cout << "The key [" << searchKey << "] was found in index " << indexFind << endl;
	}
	else
	{
		cout << "Key not found" << endl;
	}
}

