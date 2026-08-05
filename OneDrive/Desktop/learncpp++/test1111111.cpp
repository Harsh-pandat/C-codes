#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the num  ";
    cin >> n;
    if (n % 5 == 0)
    {
        cout << "This number is divsible by five\n";
    }
    if (n % 5 != 0)
    {
        cout << "This number is not divsible by five";
    }
}
