#include <iostream>
#include <iomanip>
using namespace std;

void FillArr(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20 + 10;
		}
	}
}
void ShowArr(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void FillRow(int* arr, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}
int **AddRowInTheEnd(int** arr, int &rows, int cols)
{
	rows++;
	int** temp = new int* [rows];
	for (int i = 0; i < rows - 1; i++)
	{
		temp[i] = arr[i];
	}
	temp[rows-1] = new int[cols]; 
	FillRow(temp[rows-1], cols);
	delete[]arr;
	return temp;
}
void DeleteRowInTheEnd(int** &arr, int& rows, int cols)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < rows - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr[rows - 1];
	delete[]arr;
	rows--;
	arr = temp;
}


int main()
{
	srand(time(0));
	int rows = 4;
	int cols = 5;
	//cout << "Enter count rows : ";
	//cin >> rows;
	//cout << "Enter count cols : ";
	//cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	FillArr(arr, rows, cols);
	ShowArr(arr, rows, cols);

	arr = AddRowInTheEnd(arr, rows, cols);
	arr = AddRowInTheEnd(arr, rows, cols);
	arr = AddRowInTheEnd(arr, rows, cols);
	ShowArr(arr, rows, cols);

	DeleteRowInTheEnd(arr, rows, cols);
	ShowArr(arr, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
   
}

