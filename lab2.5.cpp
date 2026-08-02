#include <iostream>
using namespace std;

class Student
{

public:

    // Constructor
    Student()
    {
        cout << "Object Created Successfully" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Object Destroyed Successfully" << endl;
    }

};

int main()
{
    Student s1;

    cout << "Inside main function" << endl;

    return 0;
}