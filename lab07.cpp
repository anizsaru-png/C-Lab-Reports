#include <iostream>
using namespace std;
class Display
{
public:
    void show()
    {
        cout << "No Argument Function" << endl;
    }
    void show(int x)
    {
        cout << "Integer Value = " << x << endl;
    }
    void show(double y)
    {
        cout << "Double Value = " << y << endl;
    }
};

int main()
{
    Display d;
    d.show();
    d.show(10);
    d.show(12.5);

    return 0;
}