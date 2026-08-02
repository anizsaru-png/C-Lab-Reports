#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    static int count;   // Static data member

public:
    // Constructor
    Student()
    {
        count++;   // Increment object count whenever an object is created
    }

    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
    }

    // Static member function
    static void showCount()
    {
        cout << "Total Number of Objects Created = " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    Student s1, s2, s3;

    s1.input();
    s2.input();
    s3.input();

    cout << "\nStudent Details:" << endl;
    s1.display();
    s2.display();
    s3.display();

    // Call static member function
    Student::showCount();

    return 0;
}