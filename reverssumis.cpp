#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    int rev = 0;
    int original = n;
    while (n != 0)
    {
        int digit = n % 10;
        // if (n%2!=0)
            rev = rev * 10 + digit;
        
        

        // rev = rev * 10 + digit;
        n = n / 10;
    }
    int sum = original + rev;
    cout << "Revers No."<<"="<<rev <<endl;
    cout<<"The revers sum is"<<"="<<sum;
}