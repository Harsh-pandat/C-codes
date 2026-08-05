#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the num  ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "This is a odd number";
    }
    if (n % 2 != 0)
    {
        cout << "This is a even number";
    }
}
