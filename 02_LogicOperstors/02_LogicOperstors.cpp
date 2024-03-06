#include <iostream>
using namespace std;

int main()
{
    //1.uno operators : -
    //5    -5
    //2. binary operator
    //logic operators - < > >= <= == !=
    //math operators  + - * / % 
    //3.ternary operator


    //increment ++ = +1
    //int a = 8;
    //cout << a << "\n";
    //a++;//  a = a + 1;  // postfix form increment
    //cout << a << endl;
    //++a;//prefix form increment
    //cout << a << endl;

    ////decrement -- = -1
    //a--;//a = a - 1;
    //cout << a << endl;
    //--a;
    //cout << a << endl;
    //cout << "-----------------------------" << endl;
    //int c = 8;
    //cout << c << endl;
    //cout << ++c << endl;//<------
    //cout << c++ << endl;//---->
    ////cout << c << endl;

    //c = c - 5;
    //cout << c << endl;
    //c += 10;//c = c + 10;
    //cout << c << endl;
    //c -= 2;//c = c - 2;
    //cout << c << endl;
    //c *= 5;//c =c * 5;
    //cout << c << endl;
    //c /= 2;// c =c /2;
    //cout << c << endl;

    //c %= 2;
    //cout << c << endl;
    //
    //int a = 23.5;//double => int
    //cout << "a = " << a << endl;

    //unsigned int b = 3000000;//int => unsigned int

    //double c = 37.4;//double => double
    //float y = (int)c;//double => float
    //cout << c << "_________" << y << endl;


    //int I = 27;
    //short S = 2;
    //float F = 22.3;
    //bool B = false;//0
    ////         int - float + int
    //auto res = I - F + S * B;
    //cout << "res = "<< res << endl;


    //float number;
    //cout << "Enter number : ";
    //cin >> number;
    //int result = number / 100;
    //cout << "Result = " << result << endl;

    //int num = { 11 };
    //cout << num << endl;
    //float num2 = { 33 };//33.00000000
    //cout << num2 << endl;
    ////int num3 = { 33.333 };//33.00000000
    ////cout << num3 << endl;
    //char symbol = '1';
    //char ch = { 77 };
    //cout << ch << endl;

    //cout << (5 > 4) << endl;
    //cout << (5 < 4) << endl;
    //cout << (5 >= 4) << endl;
    //cout << (5 <= 4) << endl;
    //cout << (3 == 4) << endl;
    //cout << (7 != 5) << endl;


    //if (5 > 10)
    //{
    //    cout << " 5 > 10" << endl;
    //}
    //else
    //{
    //    cout << " 5 < 10" << endl;
    //}

    //int a, b;
    //cout << "Enter numbers : ";
    //cin >> a >> b;

    //if (b == 0)
    //{
    //    cout << "You can't divide by zero!!!" << endl;
    //}
    //else
    //{
    //    cout << " Res = " << a / b << endl;
    //}

    //(b == 0) ? cout << "You can't divide by zero!!!" << endl: cout << " Res = " << a / b << endl;


    //int month;
    //cout << "Enter month : ";
    //cin >> month;
    //if (month >= 3 && month <= 5)
    //{
    //    cout << "Spring" << endl;
    //}
    //else if (month >= 6 && month <= 8)
    //{
    //    cout << "Summer" << endl;
    //}
    //else if (month >= 9 && month <= 11)
    //{
    //    cout << "Autumn" << endl;
    //}
    //else if (month == 1 || month == 2 || (month == 12))
    //{
    //    cout << "Winter" << endl;
    //}
    //else
    //{
    //    cout << "Error month" << endl;
    //}
    int number;
    cout << "Enter number 100....999 : ";
    cin >> number;
    cout << "Number - " << number << endl;
    int a, b, c;
    a = number / 100;
    cout << "First number  = " << a << endl;
    b = number / 10%10;
    cout << "Second number  = " << b << endl;
    c = number % 10;
    cout << "Third number  = " << c << endl;


    int h, m, s;
    cout << "Enter hour, minute, second : ";
    cin >> h >> m >> s;
   
    if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))
    {
        cout << "Hour : " << h << ". minute : " << m << ". second : " << s << endl;
    }
    else
    {
        cout << "Incorrect time " << endl;
    }
   

}

