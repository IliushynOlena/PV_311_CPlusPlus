#include <iostream>
using namespace std;

template<typename T>
class List
{
    struct Node
    {
        Node* prev;
        T value;
        Node* next;
        Node(Node* prev, T value, Node* next) : prev(prev), value(value), next(next) {}
    };
private:
    Node* head;
    Node* tail;
public:
    List()
    {
        head = nullptr;
        tail = nullptr;
    }
    bool IsEmpty()const
    {
        return head == nullptr;
    }
    void AddToHead(T value)
    {
        Node* newNode = new Node(nullptr, value, head);
        if (IsEmpty())
        {
            head = tail = newNode;
        }
        head->prev = newNode;
        head = newNode;        
    }
    void Print()
    { 
        for (Node* i = head; i != nullptr; i = i->next)
        {
            cout << i->value << " ";
        }
        cout << endl;
    }
    ~List()
    {
        Node* current = nullptr;
        while (head != nullptr)
        {
            current = head;
            head = head->next;
            delete current;
        }
    }
    void AddToTail(T value)
    {
        Node* newNode = new Node(tail, value, nullptr);
        if (head == nullptr)
        {
            head = tail =  newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

    }
    void DeleteFromTail()
    {
        if (head == nullptr)return;
        if (head->next == nullptr)
        {
            delete head;
            head = tail =  nullptr;
        }
        else
        {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }
    }
    T GetElementByPosition(int pos)
    {
        Node* current = head;
        int i = 1;
        while (current != nullptr)
        {
            if (pos == i)return current->value;
            current = current->next;
            i++;
        }
        return 0;
    }
    T operator[](int pos)
    {
        Node* current = head;
        int i = 1;
        while (current != nullptr)
        {
            if (pos == i)return current->value;
            current = current->next;
            i++;
        }
        return 0;
    }
    void DeleteFromHead()
    {
        if (head == tail)
        {
            delete head;
            head = tail = nullptr;
        }
        else {
            head = head->next;
            delete head->prev;
            head->prev = nullptr;
        }
    }

};
struct Carriage
{
    int number;
    int places;
    int passagers;
    Carriage():number(0),places(0),passagers(0){}
    Carriage(int n, int pl, int pass):number(n),places(pl),passagers(pass){}
    void Show()
    {
        cout << "Number: " << number << endl;
        cout << "Places: " << places << endl;
        cout << "Passagers: " << passagers << endl;
    }
};
ostream& operator << (ostream& out, const Carriage& c)
{
    out << "Carriage Number: " << c.number << endl;
    out << "Places: " << c.places << endl;
    out << "Passagers: " << c.passagers << endl << endl;;
    return out;
}

class Train 
{
private:
    string model;
    int count_vagons;
    List<Carriage> vagons;
public:
    Train(string model)
    {
        this->model = model;
        count_vagons = 0;
    }
    void AddCarriageToHead(Carriage c)
    {
        vagons.AddToHead(c);
        count_vagons++;
    }
    void AddCarriageToTail(Carriage c)
    {
        vagons.AddToTail(c);
        count_vagons++;
    }
    void DeleteCarriageFromHead()
    {
        vagons.DeleteFromHead();
        count_vagons--;
    }
    void DeleteCarriageFromTail()
    {
        vagons.DeleteFromTail();
        count_vagons--;
    }
    void Print()
    {
        cout << "Model Train : " << model << endl;
        vagons.Print();
        cout << "_____________________________________" << endl;
    }
};

int main()
{
    Train train("Tom");
    train.AddCarriageToHead(Carriage(1, 20, 3));
    train.AddCarriageToHead(Carriage(2, 10, 2));
    train.AddCarriageToHead(Carriage(3, 50, 33));
    train.Print();
    train.AddCarriageToTail(Carriage(4, 40, 40));
    train.Print();
    train.DeleteCarriageFromTail();
    train.Print();
    train.DeleteCarriageFromHead();
    train.Print();
    /*
    List<int> list;
    list.AddToHead(10);
    list.AddToHead(20);
    list.AddToHead(30);
    list.AddToHead(40);
    list.Print();

    list.AddToTail(100);
    list.AddToTail(200);
    list.AddToTail(300);
    list.Print();

    list.DeleteFromTail();
    list.Print();
    list.DeleteFromTail();
    list.Print();
    list.DeleteFromTail();
    list.Print();
    */
}

