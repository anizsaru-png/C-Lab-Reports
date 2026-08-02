#include <iostream>
using namespace std;

int main()
{
    int arr[] = {25, 10, 45, 5, 30};
    int n = 5;

    int *ptr = arr;

    int largest = *ptr;
    int smallest = *ptr;

    for(int i = 1; i < n; i++)
    {
        if(*(ptr + i) > largest)
            largest = *(ptr + i);

        if(*(ptr + i) < smallest)
            smallest = *(ptr + i);
    }

    cout << "Largest Element = " << largest << endl;
    cout << "Smallest Element = " << smallest << endl;

    return 0;
}