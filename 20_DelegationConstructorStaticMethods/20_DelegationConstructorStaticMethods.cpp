#include <iostream>
using namespace std;

inline void Hello()
{
    cout << "Hello" << endl;
}
class Test
{
public :
    void Print();//prototype of method   
};
void Test::Print()
{
    cout << "Hello" << endl;
}

class Human
{

    string name;
    int age;
    int weight;
    static int count_human;
public:
    static int getCountHuman()
    {
        return count_human;
    }
    Human()//default constructor
    {
     
        this->name = "no name";
        this->age = 0;
        this->weight = 0;
        this->count_human++;
    }
    Human(string name): Human()
    {
          
        this->name = name;
        //this->age = 0;
       // this->weight = 0;
        //this->count_human++;
    }
    Human(string name, int age):Human(name)
    {

        //this->name = name;
        this->age =age;
        //this->weight = 0;
        //this->count_human++;
    }
    Human(string name, int age, int weight):Human(name,age)
    {
        //this->name = name;
        //this->age = age;
        this->weight = weight;
        //this->count_human++;
    }
    //Human(string name, int weight)
    //{
    //    this->name = name;
    //    this->age = 0;
    //    this->weight = weight;
    //}
    //Human(int weight)
    //{
    //    this->name = "no name";
    //    this->age = 0;
    //    this->weight = weight;
    //}
    //Human(int age)
    //{
    //    this->name = "no name";
    //    this->age = age;
    //    this->weight = 0;
    //}
    void Show()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Weight : " << weight << endl<<endl;
    }
    ~Human()
    {
        count_human--;
    }
};

int Human::count_human = 0;
int main()
{
    static int a = 0;

    Human h;//default
    h.Show();

    Human h2("Bob");
    h2.Show();

    Human h3("Tom", 12);
    h3.Show();
    {
        Human h4("Olga", 18, 100);
        h4.Show();
        cout << "Count human : " << h4.getCountHuman() << endl;
    }
   

    cout << "Count human : " << h.getCountHuman() << endl;
    cout << "Count human : " << h2.getCountHuman() << endl;
    cout << "Count human : " << h3.getCountHuman() << endl;
    cout << "Count of human : " << Human::getCountHuman() << endl;


    // inline
    //Hello();
    //next line
    
}
