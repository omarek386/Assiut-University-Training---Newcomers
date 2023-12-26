#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    char a;
    cin >> a;
    // cout << (int)a << endl;
    if ((int)a >= 48 && (int)a <= 57)
    {
        cout << "IS DIGIT";
    }
    if ((int)a >= 65 && (int)a <= 122)
    {
        cout << "ALPHA" << endl;
        if (((int)a >= 65) && ((int)a <= 90))
        {
            cout << "IS CAPITAL";
        }
        else if (((int)a >= 97 && (int)a <= 122))
        {
            cout << "IS SMALL";
        }
    }
}