// Homework : Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 3, 45, 9, 65, 89};
    int max = 1;

    for (int i = 0; i < 7; i++)
    {
        max = arr[i];
    }

    cout << "max = " << max;
}