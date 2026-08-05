#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter the n ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i == 1)
                cout << 1;
            else if (i == 2)
                cout << char('A' + j - 1);
            else
                cout << j;
        }
        cout << endl;
    }
}