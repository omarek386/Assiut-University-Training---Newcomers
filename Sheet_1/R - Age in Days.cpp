#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int days, years = 0, months = 0;
    cin >> days;
    while (days / 365 > 0)
    {
        years++;
        days -= 365;
    }
    while (days / 30 > 0)
    {
        months++;
        days -= 30;
    }
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
}