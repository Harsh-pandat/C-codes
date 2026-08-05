#include <iostream>
using namespace std;
void USA()
{
    cout << "you are in USA"<<endl;
    
    return;
}
void india()
{
    cout << "You are in India Babu"<<endl;
    USA ();
    return;
}
int main()
{
    cout << "This is function call"<<endl;
    india();
}