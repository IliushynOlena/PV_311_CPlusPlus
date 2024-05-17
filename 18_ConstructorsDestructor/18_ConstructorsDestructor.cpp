#include <iostream>
using namespace std;

class Person//private
{
private:
    string name ;
    int age;
    int countMark;
    int* marks;
    float averageMark ;
    void SetAverage()
    {
        int summa = 0;
        for (int i = 0; i < countMark; i++)
        {
            summa += marks[i];
        }
        averageMark = (float)summa / countMark;
    }
public:
   
    Person()//default constructor
    {
        cout << "Constructor default........" << endl;
        name = "None";
        age = 0;
        countMark = 0;
        marks = nullptr;
        averageMark = 0;
    }
    Person(string name, int age)//parametrized constructor
    {
        cout << "Constructor parametrized........" << endl;
        this->name = name;
        this->age = age;
        countMark = 0;
        marks = nullptr;
        averageMark = 0;
    }
   /* void Initialize()
    {
        name = "None";
        age = 0;
        countMark = 0;
        marks = nullptr;
        averageMark = 0;
    }   */
   /* void Initialize(string name, int age)
    {
        this->name = name;
        this->age = age;
        countMark = 0;
        marks = nullptr;
        averageMark = 0;
    }*/
    void Show()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Count mark : " << countMark << endl;
        cout << "Marks : ";
        for (int i = 0; i < countMark; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Average mark : " << averageMark << endl;
        cout << endl;
    }
    void AddMark(int mark)
    {
        //countMark = 5;
        int* temp = new int[countMark + 1];//6
        for (int i = 0; i < countMark; i++)
        {
            temp[i] = marks[i];
        }
        temp[countMark] = mark;
        if (marks != nullptr)
            delete[]marks;
        marks = temp;
        ++countMark;
        SetAverage();        
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void DeleteMarks()
    {
        if (marks != nullptr)
            delete[]marks;
    }
    ~Person()
    {
        cout << "Destructor " << name << endl;
        DeleteMarks();
    }
};

int main()
{
    Person st1;//default constructor
    //st1.setName("Vasia");
    //st1.Initialize("Bob",25);
    st1.Show();

    //st1.AddMark(12);
    //st1.AddMark(11);
    //st1.AddMark(9);
    //st1.AddMark(3);
    ////st1.setName("Sasha");
    ////st1.setAge(33);
    //st1.Show();
    //st1.DeleteMarks();   
    Person st2("Mark", 12);
    //st2.setName("Olga");
    st2.Show();
    st2.AddMark(12);
    st2.AddMark(11);
    st2.AddMark(9);
    st2.AddMark(3);
    st2.Show();

}

