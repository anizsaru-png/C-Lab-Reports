#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

public:

    // Default Constructor
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    Complex add(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;

        return temp;
    }

    void display()
    {
        cout << "Complex Number = " 
             << real << "+" << imaginary << "i";
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number\n";
    c1.input();

    cout << "\nEnter second complex number\n";
    c2.input();

    c3 = c1.add(c2);

    cout << "\nSum of Complex Numbers: ";
    c3.display();

    return 0;
}