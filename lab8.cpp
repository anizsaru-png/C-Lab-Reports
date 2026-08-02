#include <iostream>
using namespace std;

double simpleInterest(double principal,
                      double rate = 10,
                      double time = 1)
{
    return (principal * rate * time) / 100;
}

int main()
{
    cout << "SI = " << simpleInterest(5000) << endl;
    cout << "SI = " << simpleInterest(5000, 12) << endl;
    cout << "SI = " << simpleInterest(5000, 12, 2) << endl;

    return 0;
}