#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if ((int)a == 122)
    {
        a = a - 25;
    }
    else
        a = a + 1;
    cout << a;
}