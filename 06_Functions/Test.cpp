#include"Test.h"
#include <iostream>
using namespace std;

void SomeFunction()
{
	static int a = 0;
	a++;
	cout << a << endl;

}

