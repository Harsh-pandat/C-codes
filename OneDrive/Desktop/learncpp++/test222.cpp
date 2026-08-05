#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the num  ";
    cin >> n;

    if ((n % 5 == 0 || n % 3 == 0) && (n % 15 != 0))
    {
        cout << "  This number is divisible by five or three but not divisible fivteen";
    }
    else
    {
        cout << "This number does not satisfy the condition";
    }
}
