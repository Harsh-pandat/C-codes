#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n ";
    cin >> n;
    int product = 1;
    while (n > 0)
    {
        int digits = n % 10;
        product = product * digits;
        n = n / 10;
    }

    cout << product;
}