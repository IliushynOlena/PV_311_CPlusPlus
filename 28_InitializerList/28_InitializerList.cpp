
#include <iostream>
using namespace std;

class Array
{
	int* arr;
	int size;
public:
	Array()
	{
		arr = nullptr;
		size = 0;
	}
	explicit Array(int size)//явно
	{
		this->size = size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = 0;
		}
	}
	~Array()
	{
		delete[]arr;
	}
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}cout << endl;
	}
	Array(const initializer_list<int> &list)
	{
		this->size = list.size();
		arr = new int[size];
		/*for (int i = 0; i < size; i++)
		{
			arr[i] = list[i];
		}*/
		int i = 0;
		for (int elem : list)
		{
			arr[i++] = elem;
		}
	}
	void Fill(const initializer_list<int>& list)
	{
		this->size = list.size();
		if (arr != nullptr)delete[]arr;
		arr = new int[size];
		int i = 0;
		for (int elem : list)
		{
			arr[i++] = elem;
		}
	}
};

int main()
{
	Array arr2({ 20,21,22,23,24,45,78,96,85,36,25,14,45,100,144,785,85 });
	arr2.Print();
	arr2.Fill({ 1,2,3 });
	arr2.Print();



	int static_arr[5] = { 1,2};
	int* dynam_arr = new int[5] {10, 11, 12, 13, 14};
	Array array;//default constructor
	array.Print();
	Array arr (10);//parametrized constructor
	arr.Print();


	delete[]dynam_arr;
}
