#include <iostream>
using namespace std;
int main()
{
    int ram, shyam, ajay;
    cout << "Enter the ram's age: ";
    cin >> ram;
    cout << "Enter the shyam's age: ";
    cin >> shyam;
    cout << "Enter the ajay's age: ";
    cin >> ajay;
    if (ram > shyam && shyam > ajay)
    {
        cout << "Ram is youngesrt";
    }
    if (shyam > ram && ram > ajay)
    {
        cout << "Shyam is youngest";
    }
    else
        cout << "ajay is youngest";
}