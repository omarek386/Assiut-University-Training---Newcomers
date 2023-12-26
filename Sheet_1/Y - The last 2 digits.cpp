#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long prod = (((a % 100) * (b % 100)) % 100 * (c % 100)) % 100 * (d % 100) % 100;
    if (prod<10)
    {
        cout << "0"<<prod;
    }
    else
        cout << prod;
}