#include <iostream>
using namespace std;
int main()
{
    int n1;
    // cout << "Enter the n1 ";
    cin >> n1;
    char op;
    // cout << "Enter the char ";
    cin >> op;
    int n2;
    // cout << "Enter the n2 ";
    cin >> n2;
    if (op == '+')
    {
        cout << n1 + n2;
    }
    else if (op == '-')
    {
        cout << n1 - n2;
    }
    else if (op == '*')
    {
        cout << n1 * n2;
    }
    else if (op == '/')
    {
        cout << n1 / n2;
    }
    else
    {
        cout << "Invalid operator";
    }
}