#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    string spetialization;
    int* marks;
    int markCount;
public:
    Person():name("no name"), spetialization("no spetialization"), marks(nullptr), markCount(0) {}
    Person(string name, string spetialization):name(name), spetialization(spetialization)
    {
        markCount = rand() % 10 + 1;
        marks = new int[markCount];
        for (int i = 0; i < markCount; i++)
        {
            marks[i] = rand() % 4 + 9;//1......12
        }
    }
    virtual void Print()const
    {
        cout << "Student : " << name << endl;
        cout << "Spetialization : " << spetialization << endl;
        cout << "Marks : ";
        for (int i = 0; i < markCount; i++)
        {
            cout << marks[i] << " ";
        }
        cout << "\n____________________________________\n";
    }
    virtual ~Person()
    {
        if (marks != nullptr)
            delete[]marks;
    }

};
class Aspirant : public Person
{
    string *subjects;
    int countSubj;
public:
    Aspirant(string name, string sp,  initializer_list<string> subjects) : Person(name, sp)
    {
        this->countSubj = subjects.size();
        this->subjects = new string[countSubj];

        int i = 0;
        for (string s : subjects)
        {
            this->subjects[i] = s;
            i++;
        }

    }

    void Print()const override
    {
        Person::Print();
        cout << "Subject : " ;
        for (int i = 0; i < countSubj; i++)
        {
            cout << subjects[i] << "  -  ";
        }
        cout << endl;
    }
    ~Aspirant()
    {
        if (subjects != nullptr)
            delete[]subjects;
    }
};

int main()
{
    srand(time(0));
    Person st("Artem", "Programmer");
    st.Print();

    Aspirant asp("Olga","Managment", { "Work with resourses", "Salles", "Test theme"});
    asp.Print();
    cout << "\n-------------------------------------------------------" << endl;

    Person* groups[3]
    {
        new Person("Artem", "Programmer"),
        new Aspirant("Olga","Managment", { "Work with resourses", "Salles", "Test theme"}),
        new Aspirant("Victor","UA/UX", { "Main window", "User experiance"})
    };

    for (int i = 0; i < 3; i++)
    {
        groups[i]->Print();
        delete groups[i];
    }
}

