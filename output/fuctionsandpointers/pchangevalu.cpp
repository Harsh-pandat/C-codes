#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *ptr = &a;
    cout << a << endl;
   *ptr =23;
    cout << a << endl;
}
