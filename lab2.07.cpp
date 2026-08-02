#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    // Function to read distance
    void input()
    {
        cout << "Enter feet and inches: ";
        cin >> feet >> inches;
    }

    // Function to display distance
    void display()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // Friend function to add two Distance objects
    friend Distance addDistance(Distance d1, Distance d2);
};

// Function that accepts two objects as arguments
Distance addDistance(Distance d1, Distance d2)
{
    Distance temp;

    temp.feet = d1.feet + d2.feet;
    temp.inches = d1.inches + d2.inches;

    // Convert inches to feet if inches >= 12
    if (temp.inches >= 12)
    {
        temp.feet = temp.feet + (temp.inches / 12);
        temp.inches = temp.inches % 12;
    }

    return temp;
}

int main()
{
    Distance d1, d2, total;

    cout << "Enter First Distance" << endl;
    d1.input();

    cout << "Enter Second Distance" << endl;
    d2.input();

    // Pass objects as function arguments
    total = addDistance(d1, d2);

    cout << "\nTotal Distance: ";
    total.display();

    return 0;
}