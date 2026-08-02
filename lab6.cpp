#include <iostream>
using namespace std;
class Area
{
public:
    // Circle
    double area(double radius)
    {
        return 3.14159 * radius * radius;
    }
    // Rectangle
    double area(double length, double breadth)
    {
        return length * breadth;
    }
    // Triangle
    double area(float base, float height)
    {
        return 0.5 * base * height;
    }};

int main()
{
    Area a;

    cout << "Area of Circle = " << a.area(5.0) << endl;
    cout << "Area of Rectangle = " << a.area(10.0, 5.0) << endl;
    cout << "Area of Triangle = " << a.area(8.0f, 6.0f) << endl;

    return 0;
}