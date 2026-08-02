#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    // Function to input student details
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    // Function to display student details
    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
    }
};

int main()
{
    // Dynamically create an object using new
    Student *ptr = new Student;

    // Access members using pointer
    ptr->input();
    ptr->display();

    // Release allocated memory
    delete ptr;

    return 0;
}