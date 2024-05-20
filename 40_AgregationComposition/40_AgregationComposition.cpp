#include <iostream>
using namespace std;

class Document
{
private:
    string name;
    string format;
    int pages;
public:
    Document() :name("no name"), format("no format"), pages(0) {}
    Document(string name, string format, int pages) :name(name), format(format)
    {
        this->pages = pages > 0 ? pages : 0;
    }
    void ShowInfo()const
    {
        cout << "______________ Document : " << name << "_______________" << endl;
        cout << "Format : " << format << endl;
        cout << "Pages : " << pages << endl;
    }

};

class Cartridge
{
public:
    enum Type{ None, Standart, L, XL};
private:
    string color;
    float volume;
    Type type;
public:
    Cartridge():color("no color"), volume(0), type(None){}
    Cartridge(string c, float v, Type t):color(c), volume(v), type(t){}

    void ShowInfo()const
    {
        cout << "Color : " << color << endl;
        cout << "Volume : " << volume << endl;
        switch (type)
        {
        case Cartridge::None:cout << "None" << endl; break;
        case Cartridge::Standart:cout << "Standart" << endl; break;
        case Cartridge::L:cout << "L" << endl; break;
        case Cartridge::XL:cout << "XL" << endl; break;
        }
        cout << endl;
    }
};
class Scanner
{
private:
    float height, width;
    float scanResolution;
public:
    Scanner():height(0),width(0),scanResolution(0){}
    Scanner(float h, float w, float s):height(h),width(w),scanResolution(s){}
    void ShowInfo()const
    {
        cout << "Scanner with " << scanResolution << " dpi " << endl;
        cout << "Area : " << height << "mm,  " << width << " mm" << endl;
    }

};
class Printer
{
private:
    string model;
    int year;
    Cartridge* cartridges;
    int countCartridges;
    Scanner scanner;//default constructor
    const Document* currentDoc;
public:
    Printer() :model("no model"), year(0), cartridges(nullptr), 
        countCartridges(0), currentDoc(nullptr){}
    Printer(string model, int year,float h, float w, float scanR): currentDoc(nullptr)
    {
        this->model = model;
        this->year = year;

        scanner = Scanner(h, w, scanR);

        countCartridges = 4;
        cartridges = new Cartridge[countCartridges];
        cartridges[0] = Cartridge("Black", 500, Cartridge::XL);
        cartridges[1] = Cartridge("Blue", 300, Cartridge::L);
        cartridges[2] = Cartridge("Green", 200, Cartridge::L);
        cartridges[3] = Cartridge("Red", 100, Cartridge::L);
    }
    ~Printer()
    {
        if (cartridges != nullptr)
            delete[]cartridges;
    }
    void Scan()
    {
        cout << "Scanning..........with settings : " << endl;
        scanner.ShowInfo();
    }
    void PrintDocument()const
    {
        cout << "Printing document " << endl;

        if (currentDoc == nullptr)
        {
            cout << "No document to print " << endl;
        }
        else
        {
            currentDoc->ShowInfo();
        }
        
    }
    void Cancel()
    {
        currentDoc = nullptr;
    }
    void ShowProperties()
    {
       
        cout << "Printing with setting : "<<endl;
        for (int i = 0; i < countCartridges; i++)
        {
            cartridges[i].ShowInfo();
        }
    }
    void AddToQueue(const Document& doc)
    {
        currentDoc = &doc;
    }
};



int main()
{
   
    Printer printer("Cannon", 2020, 50, 50, 300);
    printer.Scan();
    printer.PrintDocument();
    printer.ShowProperties();

    Document doc1("passport.pdf", "A5", 5);
    Document doc2("C++ for beginners.pdf", "A4", 1500);

    printer.AddToQueue(doc1);
    printer.PrintDocument();

    printer.AddToQueue(doc2);
    printer.Cancel();
    printer.PrintDocument();

    










}

