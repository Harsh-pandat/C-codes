#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n " << "=";
    cin >> n;
    int product = 1;
    int sum = 0;
    int rev = 0;
    int count = 0;
    while (n != 0)
    {
        // if (n % 2 != 0)
        // {
        //     int digit = n % 10;
        //     sum += digit;
        //     product = product * digit;
        //     rev = rev * 10 + digit;
        //     count++;
        // }

        int digit = n % 10;
        sum = sum + digit;
        product = product * digit;
        rev = rev * 10 + digit;
        count++;
        n = n / 10;
    }
    cout << "Sum" << "=" << sum << endl;
    cout << "Product" << "=" << product << endl;
    cout << "Rev" << "=" << rev << endl;
    cout << "count" << "=" << count << endl;
}