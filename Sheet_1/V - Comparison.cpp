#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int x, y;
    char s;
    cin >> x >> s >> y;
    if (s == '>')
    {
        if (x > y)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (s == '<')
    {
        if (x < y)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (s == '=')
    {
        if (x == y)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
}