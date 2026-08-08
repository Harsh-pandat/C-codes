// Homework : Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5,4,3,45,9,65,89};
    int product = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        product = product*arr[i];
    }
        
    cout <<"Product = "<< product;
}