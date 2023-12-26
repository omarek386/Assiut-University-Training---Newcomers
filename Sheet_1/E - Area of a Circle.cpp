#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
const double pi = 3.141592653;
int main()
{
    cout << fixed << setprecision(9);
    double R, Area;
    cin >> R;
    Area = pi * pow(R, 2);
    cout << Area << setprecision(9);
}