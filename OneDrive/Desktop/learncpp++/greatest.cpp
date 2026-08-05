#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter the number: ";
    cin >> b;
    cout << "Enter the number: ";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout <<a<< " is greater ";
        }
        else
            cout <<c<< " is graeter";
    }
    else
    {
        if (b > c)
        {
            cout <<b<< " is greater";
        }
        else
            cout <<b<< " is graeter";
    }
}