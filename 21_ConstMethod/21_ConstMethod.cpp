#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
   /* void setYear(const Date *  this, int newYear)
    {
        this->year = newYear;
    }*/
  /*  int getYear()
    {
        return year;
    }*/
    int getYear()const
    {
        return year;
    }
};
class Account {
private:
    double sum;
    const double rate;
public:
    Account(double sum, double rate): sum(sum),rate(rate){}
   /* {
        this->sum = sum;
        this->rate = rate;
    }*/
    double getRate()const
    {
        return rate;
    }
    double getIncome()
    {
        return sum * rate / 100;
    }
    double getIncome()const
    {
        return sum * rate / 100;
    }
    double getSum()
    {
        return sum;
    }
    double getSum()const
    {
        return sum;
    }
    double setSum()
    {
        sum += getIncome();
        return sum;
    }
};

int main() 
{
    int r;
    cout << "Enter rate : ";
    cin >> r;
    Account ac1(2000, r);
    const Account ac2(5000, 10);

    cout << "Get Rate 1 : " << ac1.getRate() << endl;
    cout << "Get Rate 2: " << ac2.getRate() << endl;

    cout << "Get Sum 1: " << ac1.getSum() << endl;
    cout << "Get Sum 2: " << ac2.getSum() << endl;

    cout << "Get Income 1: " << ac1.getIncome() << endl;
    cout << "Get Income 2: " << ac2.getIncome() << endl;

    cout << "Set sum 1: " << ac1.setSum() << endl;
    //cout << "Set sum 2: " << ac2.setSum() << endl;//error

    const int size = 10;
    const string s{ "first day" };

    int* psize;
    const char* filename = "Users.txt";
    const int days[]{ 31,31,28 };
    Date constitutionDay(28,6,1996);
    cout<< "Year : "<< constitutionDay.getYear()<<endl;
    const Date independencyDay(24,8,1991);
    cout<< "Year : "<< independencyDay.getYear()<<endl;
    //independencyDay.setYear(2024);//error
    //independencyDay.day = 28;//error
    //independencyDay.month = 6;//error
   
    
}
