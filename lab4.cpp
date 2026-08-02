#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamic memory allocation
    int *arr = new int[n];

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest element = " << largest << endl;

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}