#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imag;
public:
    // Constructor to initialize complex number
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    // Function that takes objects as parameters
    // and returns an object
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;   // Returning object
    }
    // Function to display complex number
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }};
int main()
{
    // Creating two objects
    Complex c1(5, 3);
    Complex c2(4, 2);
    // Passing object c2 as argument
    // Returning an object and storing it in c3
    Complex c3 = c1.add(c2);
    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    cout << "Addition of Complex Numbers: ";
    c3.display();
    return 0;
}