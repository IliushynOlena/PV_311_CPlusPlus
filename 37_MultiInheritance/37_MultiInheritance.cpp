#include <iostream>
using namespace std;

class Car
{
public:
    void Drive()
    {
        cout << "I am a car . I can drive" << endl;
    }
    void Use()
    {
        cout << "I am a car . I can drive" << endl;
    }
};
class Airplane
{
public:
    void Fly()
    {
        cout << "i am Airplane. I can fly!" << endl;
    }
    void Use()
    {
        cout << "i am Airplane. I can fly!" << endl;
    }
};

class FlyCar : public Car, public Airplane
{

};

class A {
public:
    int A;
};
class B : public A{};
class C : public A{};
class D : public B, public C
{
public:
    int getValue()
    {
        return D::B::A::A;
        return D::A::A;
        return D::C::A::A;
        return D::B::A::A;

    }

};
int main()
{
    D d;
    d.getValue();
    d.A::A = 100;
 
   /* D::A::A = 100;
    D::B::A::A = 5;*/

    Car car;
    car.Drive();
    car.Use();

    Airplane air;
    air.Fly();
    air.Use();
    
    FlyCar flycar;
    flycar.Drive();
    flycar.Fly();
    ((Car)flycar).Use();
    ((Airplane)flycar).Use();
}

