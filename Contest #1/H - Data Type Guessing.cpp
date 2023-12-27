#include <bits/stdc++.h>
#include <bitset>
using namespace std;
int main()
{
    long long a, b, c ;
    cin >> a >> b >> c ;
    double d = (a * b) / c;
    if ((a * b) % c!= 0)
        cout << "double";
    else if ((-2147483648<=d)&&(d<=2147483648) )
        cout << "int";
    else
        cout << "long long";
}