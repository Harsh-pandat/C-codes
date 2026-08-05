#include <iostream>
using namespace std;

int main()
{
  int row;
  cout << "Enter rows: ";
  cin >> row;
  int colm;
  cout << "Enter colm: ";
  cin >> colm;

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= colm; j++)
    {
      if (i == 1 || i == row || j == 1 || j == colm)
        cout << " *";
      else
        cout << "  ";
    }
    cout << endl;
  }

  return 0;
}