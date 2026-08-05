#include <iostream>
using namespace std;

int main()
{
    float length, breadth, area, perimeter;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    if (area > perimeter)
    {
        cout << "Area is greater than Perimeter.";
    }
    else
    {
        cout << "Area is not greater than Perimeter.";
    }

    return 0;
}