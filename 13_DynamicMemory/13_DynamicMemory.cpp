#include <iostream>
#include <conio.h>
using namespace std;

//#define NULL 0;

void Test1()
{
    const int size = 10;
    int arr[size];
}
void Test2()
{
    int size = 5;
    int* arr = new int[size];
    delete[] arr;
}
void InitArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int* CreateArr(int size)
{
    int* arr = new int[size];
    return arr;
}
int* AddNumber(int* arr, int *size, int number)
{
    (*size)++;//4
    int* temp = new int[*size];
    for (int i = 0; i < (*size) - 1; i++)
    {
        temp[i] = arr[i];
    }
    temp[*size - 1] = number;
    delete[]arr;
    arr = temp;
    return arr;
}
int main()
{
    srand(time(0));
    int size;//4
    cout << "Enter size of arr : ";
    cin >> size;
    //int* arr = new int[size];
    int* arr = CreateArr(size);
    InitArray(arr, size);
    ShowArray(arr, size);

    int number;
    char choice = 'y';
    while (true)
    {
        cout << "Do you want to add number ? y/n";
        choice = _getch();
        if (choice == 'n')break;

        cout << "\nEnter number : ";
        cin >> number;
        arr = AddNumber(arr, &size, number);
        system("cls");
        ShowArray(arr, size);
    }

    delete[]arr;
    //Test2();

    ////1
    //int* ptr = 0;//trash
    //if(ptr != 0){  }
    //2    
    //int* ptr =NULL;//trash
    //if(ptr != NULL){  }

    //3
    //int* ptr = nullptr;//trash
    //if (ptr != nullptr) {}
    //const int NULL = 0;
    int a = 10;
    int b;//trash
    b = 5;
    int* pa = new int(3);
    int* pb = new int;
    int* pc = nullptr;
    *pb = 5;
    pc = new int(12);
   

    cout << *pa << endl;
    cout << *pb << endl;
    cout << *pc << endl;   
   
    delete pc;
    pc = new int(7);
    cout << *pc << endl;

    delete pa;
    delete pb;
    delete pc;


}

