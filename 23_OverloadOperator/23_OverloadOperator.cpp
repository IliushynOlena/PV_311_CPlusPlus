#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point() :x(0), y(0) {}
    Point(int x, int y) :x(x), y(y) {}
    void Print()const
    {
        cout << " X : " << x << ". Y : " << y << endl;
    }  
#pragma region Binary Operators
    Point Plus(const Point& other)const
    {
        Point point(this->x + other.x, this->y + other.y);
       /* Point point;
        point.x = this->x + other.x;
        point.y = this->y + other.y;*/
        return point;
    }
    Point Minus(const Point& other)const
    {
        Point point(this->x - other.x, this->y - other.y);
        return point;
    }
    //void operator[type]()
   Point operator+ (const Point& other)const
    {
        Point point(this->x + other.x, this->y + other.y);
        return point;
    }
    Point operator- (const Point& other)const
    {
        Point point(this->x - other.x, this->y - other.y);
        return point;
    }
    Point operator* (const Point& other)const
    {
        Point point(this->x * other.x, this->y * other.y);
        return point;
    }
    Point operator/ (const Point& other)const
    {
        Point point(this->x / other.x, this->y / other.y);
        return point;
    }
    Point operator+ (int value)const
    {
        Point point(this->x + value, this->y + value);
        return point;
    }
    
    Point operator +=(const Point& other)
    {
        //c = a += b;
        this->x += other.x;
        this->y += other.y;
        return *this;
    }
    Point operator-()const
    {
        //Point point(this->x * -1, this->y * -1);
        //return point;
        return Point(-x, -y);
    }
    Point operator = (const Point& other)
    {
        this->x = other.x;
        this->y = other.y;
        return *this;
    }
#pragma endregion
#pragma region Logic Operators
    bool operator > (const Point& other)const
    {
      /*  if ((this->x + this->y) > (other.x + other.y))
            return true;
        else
            return false;*/
        return (this->x + this->y) > (other.x + other.y);
    }   
    bool operator <= (const Point& other)const
    {
        return (this->x + this->y) <= (other.x + other.y);
    }
    bool operator >= (const Point& other)const
    {
        return (this->x + this->y) >= (other.x + other.y);
    }
    bool operator == (const Point& other)const
    {
        return (this->x == other.x) && (this->y == other.y);
    }
    bool operator != (const Point& other)const
    {
        //return (this->x != other.x) || (this->y != other.y);
        return !(*this == other);
    }
#pragma endregion   
#pragma region Increment/Decrement
    //Point operator ++()//Increment prefix form
    //{
    //    ++this->x;
    //    ++this->y;
    //    return *this;
    //}
    Point operator --()//Decrement prefix form
    {
        --this->x;
        --this->y;
        return *this;
    }
    Point operator ++(int a)//Increment postfix form
    {
        this->x++;
        this->y++;
        return *this;
    }
    Point operator --(int)//Decrement postfix form
    {
        this->x--;
        this->y--;
        return *this;
    }
#pragma endregion
    int getX()const
    {
        return x;
    }
    int getY()const
    {
        return y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    friend Point operator ++(Point& other);
    friend ostream& operator << (ostream& out, const Point& other);
    friend istream& operator >> (istream& in,  Point& other);
};
ostream& operator << (ostream& out, const Point& other)
{
    out << "(X : " << other.x << "  Y : " << other.y << ")" << endl;
    return out;
}
istream& operator >> (istream& in,  Point& other)
{
    in >> other.x;
    in >> other.y;
    return in;
}
bool operator < (const Point& left ,const Point& right)
{
    return (left.getX() + left.getY()) < (right.getX() + right.getY());
}
//X = 5,  Y = 10
//Point operator ++(Point &other)//Increment prefix form
//{
//    other.setX(other.getX()+ 1);
//    other.setY(other.getY()+ 1);  
//    return other;
//}
Point operator ++(Point& other)//Increment prefix form
{
    other.x++;
    other.y++;
    return other;
}
//ostream& operator << (ostream& out, const Point& other)
//{
//    out << "(X : " << other.getX() << "  Y : " << other.getY() <<")" << endl;
//    return out;
//}

int main()
{
    //ostream cout;//<< 
    //istream cin;//>>
    Point p1(3, 8);
    Point p2(2, 5);
    int a = 5, b = 3, c = 8;
    cout <<"A = " <<  a << endl;
    cout << p1 << p2 << endl;
    cin >> p1;
    cout << p1;

    a++;//postfix
    ++a;//prefix
    cout << "P1 : "; p1.Print();
    ++p1;//p1.operator++();
    cout << "P1 : "; p1.Print();
    --p1;
    cout << "P1 : "; p1.Print();
    p1++;
    cout << "P1 : "; p1.Print();
    p1--;
    cout << "P1 : "; p1.Print();

    cout << "P1 : "; p1.Print();
    cout << "P2 : "; p2.Print();
    if (p1 < p2)
    {
        cout << " p1 is < p2" << endl;
    }
    else
    {
        cout << " p1 is > p2" << endl;
    }

    







    int res = a + b;
    cout << "Res = " << res << endl;
    res = a - b;
    cout << "Res = " << res << endl;
    cout << "P1 : "; p1.Print();
    cout << "P2 : "; p2.Print();
    Point newPoint = p1.Plus(p2);
    cout << "RES : "; newPoint.Print();

    newPoint = p1.Minus(p2);
    cout << "RES : "; newPoint.Print();

    newPoint = p1 + p2;//p1.operator+(p2);
    cout << "RES : "; newPoint.Print();
    newPoint = p1 - p2;//p1.operator-(p2);
    cout << "RES : "; newPoint.Print();
    newPoint = p1 * p2;//p1.operator*(p2);
    cout << "RES : "; newPoint.Print();
    newPoint = p1 / p2;//p1.operator/(p2);
    cout << "RES : "; newPoint.Print();
    newPoint = p1 + 100;
    cout << "RES : "; newPoint.Print();

    p1 += p2;
    cout << "P1 : "; p1.Print();

    newPoint = p1 += p2;
    cout << "RES : "; newPoint.Print();

    newPoint = -p1;
    cout << "RES : "; newPoint.Print();
    // int a = 5, b = 3, c = 8;
    //a = b = c;//<------
    //p1 = p2 = newPoint;
    //cout << "P1 : "; p1.Print();
    //cout << "P2 : "; p2.Print();
    //cout << "RES : "; newPoint.Print();
    cout << "P1 : "; p1.Print();
    cout << "P2 : "; p2.Print();
    if (p1 > p2)
    {
        cout << " p1 is > p2" << endl;
    }
    else
    {
        cout << " p1 is < p2" << endl;
    }

    if (p1 == p2)
    {
        cout << " p1 is == p2" << endl;
    }
    else
    {
        cout << " p1 is != p2" << endl;
    }

















}

