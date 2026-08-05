#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    (n % 2 == 0) ? cout << "This number is even" : cout << "This number is odd";
}
// This is ternary operator in c++ that is use only one line condition in if 