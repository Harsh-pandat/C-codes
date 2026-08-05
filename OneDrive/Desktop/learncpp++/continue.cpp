#include <iostream>
using namespace std;
int main() 
{

    for (int i = 1; i <= 56; i++)
    {
        if (i == 2 || i == 25 || i == 27 || i == 31)
            continue;

        cout << i << " ";
    }
}