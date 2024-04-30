#include <iostream>
using namespace std;

struct Node 
{
    int value;
    Node *next;
    Node(int value, Node * next):value(value),next(next){}

};

class List
{
private:
    Node* head;
public:
    List()
    {
        head = nullptr;
    }
    void AddToHead(int value)
    {
        Node* newNode = new Node(value, head);

        //newNode->value = value;
        //newNode->next = head;
        head = newNode;
    }
    void Print()
    {
        //Node* current = head;//int i = 0;
        //while (current!= nullptr)//i < 10;
        //{
        //    cout << current->value << " ";
        //    current = current->next;//i++
        //}  

        for (Node* i = head; i != nullptr;  i = i->next)
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
    void AddToTail(int value)
    {
        Node* newNode = new Node(value, nullptr);
        if (head == nullptr)
        {
            head = newNode;
        }
        else 
        {
            Node* current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
       
    }
    void DeleteFromTail()
    {
        if (head == nullptr)return;
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            Node* current = head;
            while (current->next->next != nullptr)
            {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }     
    }
    int GetElementByPosition(int pos)
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
    int operator[](int pos)
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

};

int main()
{
    List list;
    for (int i = 0; i < 5; i++)
    {
        list.AddToHead(i);
    }
    list.AddToTail(100);
    list.AddToTail(200);
    list.AddToTail(300);
    list.Print();
    cout << "Element [2] = " << list.GetElementByPosition(2) << endl;
    cout << "Element [5] = " << list.GetElementByPosition(5) << endl;
    cout << "Element [100] = " << list.GetElementByPosition(100) << endl;

    cout << "Element [2] = " << list[2] << endl;
    cout << "Element [5] = " << list[5]<< endl;
    cout << "Element [100] = " << list[100] << endl;
    list.DeleteFromTail();
    //list.DeleteFromTail();
    list.Print();
}

