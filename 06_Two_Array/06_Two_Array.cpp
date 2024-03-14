#include <iostream>
//#include <time.h>
//#include <stdlib.h>
//#include<ctime>
using namespace std;

int main()
{
    srand(time(NULL));

   
    int a = rand();//0....32767
    cout << a << endl;
    //0......x => num = rand()%x;
    //0....23
    for (int i = 0; i < 15; i++)
    {
        a = rand() %10;
        cout << a << " ";
    }
    cout << endl;

    //11....16
    //a = rand() % (16 - 11) + 11;
    //rand() % 5  => 0...4
    //x....y ==> number =  rand()%(y-x) + x
    for (int i = 0; i < 15; i++)
    {
        a = rand() % 5 + 12;
        cout << a << " ";
    }
    cout << endl;

    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 30;//0...29
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "_____________________________" << endl;
    //Написати програму, яка у двовимірному масиві зна -
  //ходить максимальний елемент кожного рядка.
    const int row = 5;
    const int col = 10;
    int array[row][col]{};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //-12.....67
            //end - start + start
            //67 - (-12) + (-12)
            //79 - 12 ..
            // rand() %79 = 0....79
            array[i][j] = rand() % 80 - 12;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    int max_elem[row]{};
    for (int i = 0; i < row; i++)
    {
        int max = array[i][0];
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                max_elem[i] = max;
            }
           
        }
        cout << "Max element [ " << i << " ] row = " << max << endl;
    }
    cout << "List of max elemnts : " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << max_elem[i] << " ";
    }cout << endl;
    cout << "_____________________________" << endl;
  

    int array2[2][2] = { {1,2},{3,4} };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int array3[2][2] = { 7,8,9,10 };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << array3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int array4[3][3] = {};// = { {4,5},{6,7,8} };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array4[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;



   


}

