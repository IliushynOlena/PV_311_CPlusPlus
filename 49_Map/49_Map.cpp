#include <iostream>
#include <map>
#include <list>
#include <windows.h>
#include <string>
using namespace std;

map<string, int>::iterator FindByValue(map<string, int> &clients, int value)
{
  
    for (map<string,int>::iterator i = clients.begin(); i != clients.end(); i++)
    {
        if (i->second == value)
        {
            return i;
        }
    }
    return clients.end();
}
struct ID
{
    int id;
    string name;
    ID(){}
    ID(int id, string name):id(id), name(name){}
    void Show()const
    {
        cout << "Id : " << id << "  Name : " << name << endl;
    }
    bool operator < (const ID& other)const
    {
        return this->id < other.id;
    }

};

class Dictionary 
{
    string name;
    map<string, list<string>> dic;
public:
    Dictionary(string name):name(name)
    {
        dic.insert(make_pair("word", list<string>({ "slovo" })));
        dic.insert(make_pair("mind", list<string>({ "dumka","dusha","spogad" })));
        dic.insert(make_pair("bad", list<string>({ "poganuy","borg" })));
    }
    void Print()const
    {
        cout << "Dictionary name : " << name << endl;
        for (auto pair : dic)
        {
            cout << "Word : " << pair.first << " - ";
            for (string word : pair.second)
            {
                cout << word << " , ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Dictionary dictionary("English-Ukrainian");
    dictionary.Print();
    cout << "--------------------------------" << endl;
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "ukr");
    map<string, list<string>> dic;
    string word = "run";
    list<string> meanings = { "bigtu", "pochatu","zapochatkevatu" };

    dic.insert(make_pair(word, meanings));
    dic.insert(make_pair("word",list<string>( {"slovo"})));
    dic.insert(make_pair("mind",list<string>( {"dumka","dusha","spogad"})));
    dic.insert(make_pair("bad",list<string>( {"poganuy","borg"})));
    for (string item : dic["bad"])
    {
        cout << item << " ";
    }

    //////////////////// add translate
    string input = "";
    cout << "Enter word to add translatins: "; getline(cin, input);

    if (dic.find(input) == dic.end())
        cout << "Word not found!\n";
    else
    {
        string translate = "";
        do
        {
            cout << "Enter translate: ";
            getline(cin, translate);
            dic[input].push_back(translate);

        } while (!translate.empty());
    }

    for (string item : dic[input])
    {
        cout << item << " ";
    }

    ////////////////////// check translate
    cout << "Enter word to translate: "; getline(cin, input);

    if (dic.find(input) == dic.end())
        cout << "Translate not found!\n";
    else
    {
        cout << "\tMeans:\n";
        for (string elem : dic[input])
            cout << elem << " ";
    }
    /*
    map<ID, int> m;
    ID id1(1, "Taras");
    pair<ID, int> p(id1, 15000);
    m.insert(p);

    m.insert(make_pair(ID(2, "Olga"), 25000));
    m.insert(make_pair(ID(3, "Anna"), 12000));
    m.insert(make_pair(ID(7, "Vasia"), 7350));
    m[ID(8, "Anna")] = 38000;

    for (auto i: m)
    {
       i.first.Show();
       cout << "Value : " << i.second << endl;
       cout << "_________________________________" << endl;
    }
    */
    /*
    map<int, string> mymap;

    map<string, int> clients;

    pair<string, int> p("Olga", 5);
    clients.insert(p);

    clients.insert(pair<string, int>("Mukola", 2));
    clients.insert(make_pair("Oleg", 7));

    for (auto item : clients)
    {
        cout << "Key : " << item.first << " Value : " << item.second << endl;       
    }

    //auto res = clients.insert(make_pair("Olga", 9));
    pair<map<string,int>::iterator, bool> res = clients.insert(make_pair("Olga", 9));
    if (res.second)
    {
        cout << "Added!!!!" << endl;
    }
    else {
        cout << "Not Added!!!!" << endl;
    }
    cout << "_______________________________________________" << endl;
    for (auto item : clients)
    {
        cout << "Key : " << item.first << " Value : " << item.second << endl;
    }

    cout << "Value Olga : " << clients["Olga"] << endl;
    cout << "Value Mukola : " << clients["Mukola"] << endl;


     map<string, int>::iterator it =  clients.find("Olga");
     if (it == clients.end())
     {
         cout << "Not found" << endl;
    }
     else
     {
         cout << "Found !!!" << endl;
         cout << "Key : " << it->first << " Value : " << it->second << endl;
         //it->first = "Ivanka";//error
         it->second = 1000;
         cout << "Key : " << it->first << " Value : " << it->second << endl;
     }

     it = FindByValue(clients, 1000);
     if (it != clients.end())
     {
         cout << "Key : " << it->first << " Value : " << it->second << endl;
     }

     if (it != clients.end())
     {
         clients.erase(it);
     }
     cout << "_______________________________________________" << endl;
     for (auto item : clients)
     {
         cout << "Key : " << item.first << " Value : " << item.second << endl;
     }

     //cout << "Value Olga : " << clients["Olga"] << endl;
     clients["Mukola"] = 100500;
     clients["Muroslava"] = 55;
     cout << "_______________________________________________" << endl;
     for (auto item : clients)
     {
         cout << "Key : " << item.first << " Value : " << item.second << endl;
     }
     */







}

