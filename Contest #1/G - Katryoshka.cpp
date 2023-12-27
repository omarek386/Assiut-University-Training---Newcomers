#include <bits/stdc++.h>
#include <bitset>
using namespace std;
int main()
{
long long e, m, b, k = 0;
    cin >> e >> m >> b ;
    if (e<m&&e<b)
    {
        k += e; 
        e = 0;
    }
    else if (e>m&&m<=b)
    {
        e -= m;
        b -= m;
        k += m;
        m = 0;
    }
    else if (e>b&&b<=m){
        e -= b;
        m -= b;
        k += b;
        b = 0;
    }
    if (e>0&&b>0){
        e /= 2;
        if (e>b){
            e -= b; 
            k += b;
            b = 0;
        }
        else{
            b -= e;
            k += e; 
            e = 0;
        }
    }
    
    
    cout << k;
    }