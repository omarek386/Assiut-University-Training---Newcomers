#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long x, y, z, max, min, mid;
    cin >> x >> y >> z;
    if (x >= y && x >= z)
    {
        max = x;
        if (y > z)
        {
            mid = y;
            min = z;
        }
        else
        {
            mid = z;
            min = y;
        }
    }
    else if (y >= x && y >= z)
    {
        max = y;
        if (x > z)
        {
            mid = x;
            min = z;
        }
        else
        {
            mid = z;
            min = x;
        }
    }
    else
    {
        max = z;
        if (x > y)
        {
            mid = x;
            min = y;
        }
        else
        {
            mid = y;
            min = x;
        }
    }
    cout << min << endl;
    cout << mid << endl;
    cout << max << "\n"
        << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z
        << endl;
}