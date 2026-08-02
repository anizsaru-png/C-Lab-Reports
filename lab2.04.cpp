#include <iostream>
using namespace std;

class Box
{
    float length;
    float breadth;
    float height;

public:

    // Parameterized Constructor
    Box(float l, float b, float h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    void volume()
    {
        cout << "Volume of Box = "
             << length * breadth * height;
    }
};

int main()
{
    Box b1(10, 5, 4);

    b1.volume();

    return 0;
}