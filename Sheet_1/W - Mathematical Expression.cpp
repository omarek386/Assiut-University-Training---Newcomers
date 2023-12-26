#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int x, y, r;
    char s, q;
    cin >> x >> s >> y >> q >> r;
    if (s == '+')
    {
        if (x + y == r)
        {
            cout << "Yes";
        }
        else
        {
            cout << x + y;
        }
    }
    else if (s == '-')
    {
        if (x - y == r)
        {
            cout << "Yes";
        }
        else
        {
            cout << x - y;
        }
    }
    else if (s == '*')
    {
        if (x * y == r)
        {
            cout << "Yes";
        }
        else
        {
            cout << x * y;
        }
    }
}