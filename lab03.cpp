#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double number = 123.456789;
    cout << "Default Output: " << number << endl;
//    cout << fixed;
    cout << "Fixed with 2 decimal places: "
         << setprecision(2) << number << endl;
    cout << "Fixed with 4 decimal places: "
         << setprecision(4) << number << endl;

    return 0;
}