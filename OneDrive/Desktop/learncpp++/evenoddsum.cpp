#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n ";
    cin >> n;

    int sum = 0;
    while (n!= 0)
    {
        int digits = n%10;
       if (digits%2!=0)
       {
        
        sum+=digits;
       }
       n=n/10; 
    }
      cout << sum;
}