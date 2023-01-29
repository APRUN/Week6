#include <iostream>
using namespace std;
main()
{
    int x, y, h;
    cout << "Enter h: ";
    cin >> h;
    cout << "Enter x: ";
    cin >> y;
    cout << "Enter y: ";
    cin >> h;
    if (x > 2 * h || x < 0 || y > 4 * h || y < 0)
    {
        cout << "Outside";
    }
   else if (x < 2*h || x > 0 || y < 4 * h || y > 0)
    {
        cout << "Inside";
    }
    else
    {
        cout << "Border";
    }
}