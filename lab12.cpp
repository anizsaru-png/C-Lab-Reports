#include <iostream>
using namespace std;

int findSum(int *arr, int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }

    return sum;
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    int total = findSum(numbers, size);

    cout << "Sum of Array Elements = " << total << endl;

    return 0;
}