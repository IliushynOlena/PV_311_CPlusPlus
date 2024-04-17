#include <iostream>
using namespace std;

struct Carriage
{
    int number;
    int places;
    int passagers;
    void Show()
    {
        cout << "Number: " << number << endl;
        cout << "Places: " << places << endl;
        cout << "Passagers: " << passagers << endl;
    }
};

class Train
{
private:
    string model;
    int count_carriage;
    Carriage* carriages;

    Carriage fill_carriage(Carriage c)
    {
        cout << "Number: ";
        cin >> c.number;
        cout << "Places: ";
        cin >> c.places;
        cout << "Passagers: ";
        cin >> c.passagers;
        return c;
    }

public:
    Train()
    {
        this->model = "";
        this->count_carriage = 0;
        this->carriages = nullptr;

    }
    Train(string model)
    {
        this->model = model;
        this->count_carriage = 0;
        this->carriages = nullptr;
    }
    Train(const Train& other)
    {
        this->model = other.model;
        this->carriages = new Carriage[other.count_carriage];
        this->count_carriage = other.count_carriage;
        for (int i = 0; i < count_carriage; i++)
        {
            carriages[i] = other.carriages[i];
        }
    }
    ~Train()
    {
        delete[]carriages;
        cout << "Deleted!" << endl;
    }
    void Show()
    {
        cout << "-------- TRAIN [" << model << "] ---------\n";
        cout << "Count carriages: " << count_carriage << endl;
        cout << "Carriages info: " << endl;
        for (int i = 0; i < count_carriage; i++)
        {
            cout << "\t" << i + 1 << "-carriage:" << endl;
            carriages[i].Show();
        }
        cout << endl;
    }

    void Add_carriages(int count)
    {
        Carriage* temp = new Carriage[count_carriage + count];
        for (int i = 0; i < count_carriage; ++i)
        {
            temp[i] = carriages[i];
        }
        for (int i = count_carriage; i < (count_carriage + count); i++)
        {
            cout << "Fill " << i + 1 << "-th carriage info: " << endl;
            temp[i] = fill_carriage(temp[i]);
        }

        if (carriages != nullptr)
            delete[] carriages;
        carriages = temp;

        count_carriage += count;
    }
    void Add_one_pass(int number)
    {
        for (int i = 0; i < count_carriage; i++)
        {
            if (carriages[i].number == number)
            {
                carriages[i].passagers++;
            }
        }
    }
    void operator++()
    {
        for (int i = 0; i < count_carriage; i++)
        {            
            carriages[i].passagers++;
        }
    }
    Carriage GetCarriage(int index)
    {
        if (index < 0 || index >= count_carriage) return Carriage();
        else return carriages[index];
    }
    Carriage operator[](int index)
    {
        if (index < 0 || index >= count_carriage) return Carriage();
        else return carriages[index];
    }
    void ChangePassangers(int count)
    {
        for (int i = 0; i < count_carriage; i++)
        {
            carriages[i].passagers+=count;
        }
    }
    void ChangePassangers(int count, int number)
    {
        for (int i = 0; i < count_carriage; i++)
        {
            if (carriages[i].number == number)
            {
                carriages[i].passagers+=count;
            }
        }
    }
    void operator()(int count)
    {
        for (int i = 0; i < count_carriage; i++)
        {
            carriages[i].passagers += count;
        }
    }
    void operator()(int count, int number)
    {
        for (int i = 0; i < count_carriage; i++)
        {
            if (carriages[i].number == number)
            {
                carriages[i].passagers += count;
            }
        }
    }


};
int main()
{
    
    Train train("Intersity");   
    train.Show();
    train.Add_carriages(2);
    train.Show();
    //train.Add_carriages(3);
    //train.Show();
    train.Add_one_pass(1);
    train.Show();
    train.Add_one_pass(1);
    ++train;
    ++train;
    ++train;
    train.Show();
    Carriage car = train.GetCarriage(0);
    car.Show();
    cout << "------------------------" << endl;
    car = train[0];
    car.Show();
    train.ChangePassangers(10);
    train.Show();
    train.ChangePassangers(100,1);
    train.Show();
    train(10);
    train.Show();
    train(100, 1);
    train.Show();

    Train newTrain;
  
    //Train new_train(train);
    //new_train.Show();
}
