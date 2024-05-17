#include <iostream>
using namespace std;

//struct Player//all fields is public
//{
//	string name;//char name[50];
//	int age;
//	int games;
//	int goals;
//};
//void PrintPlayer(Player & pl)
//{
//	cout << "Name : " << pl.name << endl;
//	cout << "Age : " << pl.age << endl;
//	cout << "Games : " << pl.games << endl;
//	cout << "Goals : " << pl.goals << endl;
//}
//void InitPlayer(Player& pl)
//{
//	cout << "Name : "; cin >> pl.name;
//	cout << "Age : "; cin >> pl.age;
//	pl.games = 0;
//	pl.goals = 0;
//}
//void AddGameToPlayer(Player &pl, int goals = 0)
//{
//	pl.games++;
//	pl.goals += goals;
//}

class Player//all fields is private
{
private://(default)
	string name;
	int age;
	int games;
	int goals;
	bool IsValidateGoals(int goals) { return goals >= 0; }
public:
	void PrintPlayer()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "Games : " << games << endl;
		cout << "Goals : " << goals << endl;
	}
	void Initialize()
	{
		name = "No name";
		age = 0;
		games = 0;
		goals = 0;
	}
	void InitPlayerFromKeyBoard()
	{
		cout << "Name : "; cin >> name;
		cout << "Age : "; cin >> age;
	}
	
	void AddGameToPlayer(int goals = 0)
	{
		this->games++;
		if(IsValidateGoals(goals))
			this->goals += goals;
	}
};

class Person
{
//private:
//protected:

private:
	string name;
	string surname;
	int marks[3];
public:
	double getAverage()
	{
		double sum = 0;
		for (int i = 0; i < 3; i++)
		{
			sum += marks[i];
		}
		return sum / 3.0;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setSurname(string surname)
	{
		this->surname = surname;
	}
	void setMark(int mark, int index)
	{
		if (mark < 1 || mark > 12)
		{
			mark = 0;
		}
		marks[index] = mark;
	}
	string getName()
	{
		return name;
	}
	string getSurname()
	{
		return surname;
	}
	int getMark(int index)
	{
		return marks[index];
	}
};
int main()
{
	Person student;//object 
	Person student1;//object 
	Person student2;//object 
	student.setName("Valera");
	student.setSurname("Kyluk");
	student.setMark(10,0) ;
	student.setMark(12,1) ;
	student.setMark(11,2) ;

	cout << "Name : " << student.getName() << " Surname : " << student.getSurname()
		<< " Marks : " << student.getMark(1)<< endl;
	cout << "Average mark : " << student.getAverage() << endl;
	/*student.name = "Valera";
	student.surname = "Kyluk";
	student.marks[0] = 10;
	student.marks[1] = 7;
	student.marks[2] = 12;
	cout << "Name : " << student.name << " Surname : " << student.surname 
		<< " Marks : "<< student.marks[0] << endl;
	cout << "Average mark : " << student.getAverage() << endl;*/
	



	Player pl;
	pl.Initialize();
	pl.InitPlayerFromKeyBoard();
	pl.PrintPlayer();
	pl.AddGameToPlayer();
	pl.PrintPlayer();
	pl.AddGameToPlayer(1);
	pl.PrintPlayer();
	pl.AddGameToPlayer(5);
	pl.PrintPlayer();



	/*Player pl;

	InitPlayer(pl);
	PrintPlayer(pl);
	AddGameToPlayer(pl);
	PrintPlayer(pl);
	AddGameToPlayer(pl,1);
	PrintPlayer(pl);
	AddGameToPlayer(pl,5);
	PrintPlayer(pl);*/
   
}

