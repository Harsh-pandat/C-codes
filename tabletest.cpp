#include <iostream>
using namespace std;
int main()
{
    int n;
    // cout << "Enter the number ";
    // cin >> n;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << n * i << endl;
    // }
    cout << "Enter the number ";
    cin >> n;
    int term = 3;
    for (int i = 3; i <= n; i++)
    {
        cout << term << endl;
        term = term * 4;
    }
}