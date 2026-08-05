#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter 1st number : ";
    cin >> a;
    cout << "enter 2nd number : ";
    cin >> b;
    cout << "enter 3rd number : ";
    cin >> c;
    if (a > b && a > c)

        cout << "A : Greatere";
    if (b > a && b > c)
    {
        cout << " B : Greater A and C ";
    }

    else
    {
        cout << "C : Greater A and B";
    }
}