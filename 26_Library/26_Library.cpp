
#include "Library.h"

Library ShowLibrary(Library &lib)//copy constructor
{
    Library temp;//default constructor
    temp = lib;//operator = 
    //some code 
    return temp;

}//copy constructor
int main()
{
    Book b;
    Book b1("C++ for beginners", 2022, "Stiven Prata", 1500, Genre::Programming);
    //b1.ShowInfo();

    Library lib("Rivne, Kyivska 16");
    lib.AddBook(b1);
    lib.AddBook(Book("Harry Potter", 2018, "Royling", 800, Genre::Fantasy));
    lib.AddBook(Book("Maria", 1980, "Kotliarevskuy", 300, Genre::History));
    lib.AddBook(Book("The Lord of the Rings ", 2019, "Jonh Ronald", 450, Genre::Fantasy));

    lib.Show();

    ShowLibrary(lib);
  
    Library copy(lib);//copy constructor 
    Library newLib = copy;//operator = 
    newLib = lib = copy;//operator = 
}

