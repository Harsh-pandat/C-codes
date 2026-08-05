#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the n ";
    cin>>n;
    int r;
    cout<<"Enter the r";
    cin>>r;
    int a = fact (n);
    int b = fact (r);
    int c = fact (n-r);
    cout<<a/(b*c);

    
}