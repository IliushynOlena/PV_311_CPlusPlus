#include <iostream>
#include <Windows.h>
using namespace std;

class Car
{
protected:
    string model;
    int speed;
    float volume;
    float run;
    int year;
public:
    Car() :model("no model"), speed(0), volume(0), run(0), year(0) {}
    Car(string m, float v, float r, int y) :model(m), speed(0),
        volume(v), run(r), year(y) {}
    virtual void Drive()const
    {
        cout << "I am a Car ! I can drive with speed " << speed << " km/h" << endl;
    }
    virtual void Print()const
    {
        cout << "---------------- Car -------------" << endl;
        cout << "Model : " << model << endl;
        cout << "Speed : " << speed << endl;
        cout << "Volume : " << volume << endl;
        cout << "Run : " << run << endl;
        cout << "Year : " << year << endl;
    }
    void setSpeed(int speed)
    {
        if (speed > 0)
            this->speed = speed;
    }
};
class PoliceCar : public Car //public Car,private Car, protected Car
{
    int soundVolume;
public:
    PoliceCar() :soundVolume(0), Car() {}
    PoliceCar(string m, float v, float r, int y, int s) :soundVolume(s), Car(m, v, r, y) {}
    void Drive()const override
    {
        cout << "I am a Police Car ! I can drive with speed " << speed << " km/h" << endl;
    }
    void Print() const override
    {
        Car::Print();
        cout << "Sound Volume " << soundVolume << " dB" << endl;
    }
    void BeepBeep() {
        for (int i = 0; i < 3; ++i)
        {
            Beep(587, 300); // C#
            Beep(659, 300); // E    
        }
        for (int i = 0; i < 3; ++i) {
            Beep(659, 300); // E
            Beep(587, 300); // C#    
        }
        /*
        Beep(330, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(392, 100); Sleep(700);
        Beep(196, 100); Sleep(700);
        Beep(262, 300); Sleep(300);
        Beep(196, 300); Sleep(300);
        Beep(164, 300); Sleep(300);
        Beep(220, 300); Sleep(100);
        Beep(246, 100); Sleep(300);
        Beep(233, 200);
        Beep(220, 100); Sleep(300);
        Beep(196, 100); Sleep(150);
        Beep(330, 100); Sleep(150);
        Beep(392, 100); Sleep(150);
        Beep(440, 100); Sleep(300);
        Beep(349, 100); Sleep(100);
        Beep(392, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(247, 100); Sleep(500);
        Beep(262, 300); Sleep(300);
        Beep(196, 300); Sleep(300);
        Beep(164, 300); Sleep(300);
        Beep(220, 300); Sleep(100);
        Beep(246, 100); Sleep(300);
        Beep(233, 200);
        Beep(220, 100); Sleep(300);
        Beep(196, 100); Sleep(150);
        Beep(330, 100); Sleep(150);
        Beep(392, 100); Sleep(150);
        Beep(440, 100); Sleep(300);
        Beep(349, 100); Sleep(100);
        Beep(392, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(247, 100); Sleep(900);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(207, 100); Sleep(100);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(500);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(523, 100); Sleep(300);
        Beep(523, 100); Sleep(100);
        Beep(523, 100); Sleep(1100);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(207, 100); Sleep(100);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(500);
        Beep(311, 300); Sleep(300);
        Beep(296, 300); Sleep(300);
        Beep(262, 300); Sleep(1300);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(300);
        Beep(330, 200); Sleep(50);
        Beep(262, 200); Sleep(50);
        Beep(220, 200); Sleep(50);
        Beep(196, 100); Sleep(700);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(330, 100); Sleep(700);
        Beep(440, 100); Sleep(300);
        Beep(392, 100); Sleep(500);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(300);
        Beep(330, 200); Sleep(50);
        Beep(262, 200); Sleep(50);
        Beep(220, 200); Sleep(50);
        Beep(196, 100); Sleep(700);
        /*Intro*/
        /*
        Beep(330, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(392, 100); Sleep(700);
        Beep(196, 100); Sleep(700);
        Beep(196, 100); Sleep(125);
        Beep(262, 100); Sleep(125);
        Beep(330, 100); Sleep(125);
        Beep(392, 100); Sleep(125);
        Beep(523, 100); Sleep(125);
        Beep(660, 100); Sleep(125);
        Beep(784, 100); Sleep(575);
        Beep(660, 100); Sleep(575);
        Beep(207, 100); Sleep(125);
        Beep(262, 100); Sleep(125);
        Beep(311, 100); Sleep(125);
        Beep(415, 100); Sleep(125);
        Beep(523, 100); Sleep(125);
        Beep(622, 100); Sleep(125);
        Beep(830, 100); Sleep(575);
        Beep(622, 100); Sleep(575);
        Beep(233, 100); Sleep(125);
        Beep(294, 100); Sleep(125);
        Beep(349, 100); Sleep(125);
        Beep(466, 100); Sleep(125);
        Beep(587, 100); Sleep(125);
        Beep(698, 100); Sleep(125);
        Beep(932, 100); Sleep(575);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(1046, 675);*/
    }

};
class SportCar : public Car
{
    int turbo;
public:
    SportCar() :turbo(0), Car() {}
    SportCar(string m, float v, float r, int y, int t) :turbo(t), Car(m, v, r, y) {}
    void Drive()const override
    {
        cout << "I am a Sport Car ! I can drive with speed " << speed << " km/h" << endl;
    }
    void Print()const override
    {
        Car::Print();
        cout << "Turbo speed " << turbo << " km/h" << endl;
    }
    void Nitro()
    {
        speed += turbo;
        cout << "New speed " << speed << " km/h" << endl;
    }

};
//virtual override
void TestDrive(Car& car)
{
    car.setSpeed(70);
    car.Drive();
}
int main()
{
    Car car("BMV", 2.0, 50000, 2024);
    car.setSpeed(350);
    car.Drive();
    car.Print();

    PoliceCar police("Toyota", 1.5, 200000, 2000, 500);
    police.setSpeed(100);
    police.Drive();
    police.Print();
    //police.BeepBeep();

    SportCar sport("Ford", 3.0, 2000, 2024, 50);
    sport.setSpeed(250);
    sport.Drive();
    sport.Nitro();
    sport.Print();
    cout << endl << endl;
    TestDrive(car);
    TestDrive(police);
    TestDrive(sport);

    Car* cars[3]{
        new Car("BMV", 2.0, 50000, 2024),
        new PoliceCar("Toyota", 1.5, 200000,2000, 500),
        new SportCar("Ford", 3.0, 2000, 2024, 50)
    };

    for (int i = 0; i < 3; i++)
    {
        //cars[i]->Drive();
        cars[i]->Print();
        cout << "____________________________" << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        delete cars[i];
    }



}
