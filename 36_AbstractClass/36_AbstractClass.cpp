#include <iostream>
using namespace std;

class Animal//abstract class 
{
	string name;
	float weight;
	string place;
public:
	Animal() :name("no name"), weight(0), place("no place") {}
	Animal(string name, float weight, string place) :name(name), place(place)
	{
		/*if (weight > 0)
			this->weight = weight;
		else
			this->weight = 0;*/

		this->weight = (weight > 0) ? weight : 0;
	}
	void ShowInfo()const
	{
		cout << "Name : " << name << endl;
		cout << "Weight : " << weight << endl;
		cout << "Place : " << place << endl;
	}
	virtual void Move()const
	{
		cout << "I am moving......" << endl;
	}
	//pure virtual function
	virtual void MakeSound()const = 0;

};
class Lion : public Animal
{
	float runSpeed;
public:
	Lion() :runSpeed(0), Animal() {}
	Lion(string name, float weight, string place, float run) :runSpeed(run),
		Animal(name,weight,place) {}

	void MakeSound()const override
	{
		cout << "Rrrrrr-r-rr-r-r-r-r-rr-r-rrr" << endl;
	}
	void Move()const override
	{
		cout << "I am running with speed " << runSpeed << " km/h" << endl;
	}
};
class Duck : public Animal
{
	float flyHeight;
public:
	Duck():flyHeight(0),Animal(){}
	Duck(string name, float weight, string place, float fly):flyHeight(fly),
		Animal(name,weight, place){}

	void MakeSound()const override
	{
		cout << "Kra-kra-kra-kra-kra" << endl;
	}
	void Move()const override
	{
		cout << "I am swimming and flying up to  " << flyHeight << " m" << endl;
	}
};
class Reptile: public Animal//abstract class
{
	float swimDeep;
public:
	Reptile():swimDeep(0),Animal(){}
	Reptile(string name, float weight, string place, float swim):swimDeep(swim),
		Animal(name,weight,place){}

	void Move()const override
	{
		cout << "I am crowling and swimming up to  " << swimDeep << " m" << endl;
	}
	//pure virtual function
	//virtual void MakeSound()const = 0;
};
class Frog : public Reptile
{
public:
	Frog():Reptile(){}
	Frog(string name, float weight, string place, float swim) :
		Reptile(name, weight, place, swim) {}
	
	void MakeSound()const override
	{
		cout << "Kva-kva-kva-kva" << endl;
	}
};

void RollCall(Animal &animal)
{
	animal.MakeSound();
	animal.Move();
	animal.ShowInfo();
}

int main()
{
	Frog frog("Crazy Frog", 0.33, "Boloto", 1);
	//frog.Move();
	//frog.MakeSound();
	//cout << endl;
	Lion lion("Sasha",100,"Africa",80);
	/*lion.MakeSound();
	lion.Move();
	cout << endl;*/
	Duck duck("Sergiy",3, "Village",2);
	//duck.MakeSound();
	//duck.Move();

	//Animal animal;//abstract class 
	//animal.ShowInfo();
	//animal.Move();
	//animal.MakeSound();

	RollCall(lion);
	RollCall(duck);
	RollCall(frog);













}

