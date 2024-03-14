#include <iostream>
using namespace std;


void Hello()
{
    cout << "Hello Olena" << endl;
}

inline void HelloInline()
{
    cout << "Hello world in line" << endl;
}

template<typename T>
T max_element(T arr[], int size)
{
    T max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
/*
int max_element(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
long max_element(long arr[], int size)
{
    long max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
float max_element(float arr[], int size)
{
    float max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
double max_element(double arr[], int size)
{
    double max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
*/
double Multy(double x)
{
    return x * x * x;
}
double Multy(double x, double y)
{
    return x * y * x;
}
double Multy(double x, double y, double z)
{
    return x * y * z;
}
//double Multy(double a= 1.0, double b = 1.0, double c = 1.0, double d = 1.0)
//{
//    return a*b + c*d;
//}


template<typename T>
T Max(T a, T b)
{
    return a > b ? a : b;
}

template<typename T1, typename T2>
T2 Max(T1 a, T2 b)
{
    return a > b ? a : b;
}


int main()
{
    cout << "Max = " << Max(5, 7) << endl;//int
    cout << "Max = " << Max(3.14, 9.8) << endl;//double
    cout << "Max = " << Max('A', 'W') << endl;//char
    cout << "Max = " << Max(25,12.36) << endl;//int...double

    //1. Написати шаблон функції для пошуку середнього
    // арифметичного значення масиву.

    //2.Написати шаблонні функції і протестувати їх в ос -
    //    новній програмі :

    //■ Знаходження максимального значення в однови -
    //    мірному масиві;

    //■ Знаходження максимального значення у двовимір -
    //    ному масиві;


    //3.Реалізуйте перевантажені функції для
    //■ Знаходження максимального значення двох цілих;
   // ■ Знаходження максимального значення трьох цілих.
   //■ Знаходження мінімального значення двох цілих;
   // ■ Знаходження мінімального значення трьох цілих.




    int arr_int[] = { 1,8,7,9,6,12,45,36,74 };
    cout << " max_element = " << max_element(arr_int, 9) << " in  [ int array ]" << endl;
    long arr_long[] = { 10L,20l,30l,40l,50l,60l };
    cout << " max_element = " << max_element(arr_long, 6) << " in  [ long array ]" << endl;
    float float_arr[] = { 0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f };
    cout << " max_element = " << max_element(float_arr, 9) << " in  [ float array ]" << endl;
    double double_arr[] = { 0.05,0.06,0.07,0.08,0.09,0.1,0.2,0.3,0.04 };
    cout << " max_element = " << max_element(double_arr, 9) << " in  [ float array ]" << endl;


    cout << "Multy 1 = " << Multy(5.3) << endl;
    cout << "Multy 2 = " << Multy(3.1,2.9) << endl;
    cout << "Multy 3 = " << Multy(1.1,2.2,33.3) << endl;
    //cout << "Multy 4 = " << Multy(1.1,2.2,33.3, 5.8) << endl;






    //Hello();
    //cout << "Hello world in line" << endl;//HelloInline();

}

