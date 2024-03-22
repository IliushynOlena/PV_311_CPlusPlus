#include <iostream>
#include <iomanip>
#include <algorithm>
#include <Windows.h>
using namespace std;

void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}



void ChangeValue(int &a)
{
    a++;
}

int& FindMax(int& a, int& b)
{
    if (a > b)return a;//000j8j8j8j
    else return b;//003j6jjj  
}
void InitArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int& FindMax(int* arr, int size)
{
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
            maxIndex = i;
        }//5 9 6 8 7 4 5 6 23 25 35 
    }
    return arr[maxIndex];
}
int main()
{
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        Sleep(100);
        SetColor(rand() % 14);
        SetPos(rand() % 200, rand() % 20); cout << "*";
    }
    /*int x1 = 10;
    int y1 = 1;
    for (int i = 0; i < 10; i++)
    {
        SetPos(x1+i, y1 + i); SetColor(i); cout << "Hello world" << endl;
    }
    SetColor(5); cout << max(5, 8) << endl; SetColor(7);
    
    cout << left << setw(5)<< "A"  << endl;
    cout << right<< setw(10)  << "B" << endl;

    float x = -5, y = 2.7, z = 3.14;
    cout << setw(5) << x << endl;
    cout << setw(5) << y << endl;
    cout << setw(5) << z << endl;*/

   /* for (int i = 0; i <= 255; i++)
    {
        cout << "code = " << i << " symbol [ " << (char)i << " ] " << endl;
    }*/

  //  const int size = 10;
  //  int arr[size];
  //  InitArray(arr, size);
  //  ShowArray(arr, size);
  //  FindMax(arr, size) = 0;
  // /* int* Max = FindMax(arr, size);
  //  cout << "Max element = " << *Max << endl;
  //  *Max = (*Max) * 2;*/
  //  ShowArray(arr, size);


  //  int a = 10;
  //  int b = 3;
  //  cout << "a = " << a << endl;
  //  ChangeValue(a);
  //  cout << "a = " << a << endl;
  //  cout << "b = " << b << endl;

  //  //int &max = FindMax(a, b);
  ///*  cout << "Max = " << max << endl;
  //  max++;

  //  cout << "Max = " << max << endl;*/
  //  FindMax(a, b) = 1;
  // 
  //  cout << "a = " << a << endl;
  //  cout << "b = " << b << endl;

    //int a = 10;
    //int* pa = &a;//pointer
    //int& la = a;//link
    //int b = 3;
    //int* pb;
    //pb = &b;
    ////int* lb;//error
    ////lb = b;//error
    //int& lb = b;

    //cout << "a = " << a << endl;
    //cout << "pa = " << pa << endl;
    //cout << "*pa = " << *pa << endl;
    //cout << "la = " << la << endl;
    //cout << "lb = " << lb << endl;
    //cout << "Summa = " << la + lb << endl;


}
