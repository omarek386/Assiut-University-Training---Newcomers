#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a >= 10)
    {
        a /= 10;
    }
    if (a % 2 == 0)
    {
        cout << "EVEN";
    }
    else
        cout << "ODD";
}