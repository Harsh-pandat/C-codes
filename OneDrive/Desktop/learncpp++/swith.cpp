#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout << "Enter the n1 ";
    cin >> n1;
    char op;
    cout << "Enter the char ";
    cin >> op;
    int n2;
    cout << "Enter the n2 ";
    cin >> n2;
    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;

    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;

    default:
        cout << "Invalid opetrater";
        break;
    }
}