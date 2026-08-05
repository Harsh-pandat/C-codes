// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter the the number ";
//     cin>>n;
//     if (n>=0)
// {
//     cout<<n;
// }
// else
// cout<<-n;

// }
#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout << "Enter the cp  ";
    cin >> cp;
    int sp;
    cout << "Enter the sp  ";
    cin >> sp;
    if (cp > sp)
    {
        cout << "You are geting profit :" << cp - sp;
    }
    else if (cp == sp)
    {
        cout << "You have no profit no loss ";
    }
    if (cp < sp)
    {
        cout << "You are geting loss : " << sp - cp;
    }
}
