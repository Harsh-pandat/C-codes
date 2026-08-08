// print the sum of array elemnts
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5,66,34,23};
        
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}