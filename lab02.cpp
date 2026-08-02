#include <iostream>
#include<typeinfo>
using namespace std;

int main()
{
    // Implicit Type Casting
    int num = 10;
    float result = num;   // int automatically converted to float

    cout << "Implicit Casting:" << endl;
    cout << "num = " << num << endl;
    cout << "result = " <<result<<typeid(result).name()<< endl;

    // Explicit Type Casting
    double value = 9.75;
    int converted = (int)value;   // Explicit cast

    cout << "\nExplicit Casting:" << endl;
    cout << "value = " << value << endl;
    cout << "converted = " << converted << endl;

    return 0;
}