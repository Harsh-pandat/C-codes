#include <iostream>
using namespace std;
// void swap(int& x, int& y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// } 
// that is call pass by referetions'
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
// that is call the pass by value jisme value change hoogi but box wahi rahegi hai
int main()
{
    int x = 10;
    int y = 12;
    // cout << "Enter the x  ";
    // cin >> x;
    // cout << "Enter the y  ";
    // cin >> y;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;
}