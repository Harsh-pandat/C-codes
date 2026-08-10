// Homework : Calculate the max and min of all the elements in the given array.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 3, 45, 9,  89,900,1000};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        max = arr[i];
    }

    cout << "max = " << max;
}