#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    float marks;

public:
    void read()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;   // Object creation

    s1.read();
    s1.display();

    return 0;
}