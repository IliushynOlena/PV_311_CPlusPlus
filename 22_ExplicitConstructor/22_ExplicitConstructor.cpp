#include <iostream>
using namespace std;

void doSomething(long num)
{
    //some code
}
float doSomething()
{
    return 10.0;//double ===> float
}
class Array
{
    int* arr;
    int size;
public:
    Array() {}
    explicit Array(int size)//явно
    {
        this->size = size;
        arr = new int[size];
       /* for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }*/
    }
    ~Array()
    {
        delete[]arr;
    }
    int getSize()const
    {
        return size;
    }
    int getValue(int index)const
    {
        return arr[index];
    }
    void setValue(int value, int index)
    {
        arr[index] = value;
    }
    void display(int index)const
    {
        cout << arr[index] << " ";
    }
};
void Display(const Array& arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        arr.display(i);
    }
    cout << endl;
}
class Student
{
public:
    Student(int age)
    {

    }

};
int main()
{
    int size = 4;
    Array arr(size);//constructor
    for (int i = 0; i < size; i++)
    {
        arr.setValue(size - i, i);
    }
    Display(arr);
    cout << "!!!!!" << endl;
    //implicit int ===> Array
    //Array arr2 = 10;//implicit int ===> Array
    //Display(15);
    //Display(arr2);
    Student st(15);//constructor
    Student st2 = 45;
    /*
    //explicit implicit

    //implicit
    double a(10);//int ===> double 10.0000000000000
    doSomething(5);//int ===> long
    doSomething();////double ===> float
    double res = 5.0 / 4;
    */










    
}

