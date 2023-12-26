#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    float x;
    cin >> x;
    float floatx = x - (int)x;
    if (floatx == 0)
        cout << "int " << (int)x << endl;
    else
        cout << "float " << (int)x << " " << floatx << endl;
}