#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    int bookId;
    string bookName;
    float price;

public:
    // Constructor
    Library(int, string, float);

    // Destructor
    ~Library();

    // Member function
    void display();
};

// Constructor definition outside the class
Library::Library(int id, string name, float p)
{
    bookId = id;
    bookName = name;
    price = p;
}

// Destructor definition outside the class
Library::~Library()
{
    cout << "\nLibrary object destroyed." << endl;
}

// Display function definition outside the class
void Library::display()
{
    cout << "\nBook Details" << endl;
    cout << "Book ID   : " << bookId << endl;
    cout << "Book Name : " << bookName << endl;
    cout << "Price     : " << price << endl;
}

int main()
{
    // Create object and initialize using constructor
    Library book1(101, "C++ Programming", 650);

    // Display book details
    book1.display();

    return 0;
}