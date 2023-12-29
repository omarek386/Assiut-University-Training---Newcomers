#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int N,fac;
    long long result ;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> fac;
        result = fac;
        if (result==0)
            cout << 1<<endl;
        else
        {
            for (int j = 1; j < fac; j++)
            {
                result *=  j;
            }
            
            cout <<result<<endl;
        }
    }
}
