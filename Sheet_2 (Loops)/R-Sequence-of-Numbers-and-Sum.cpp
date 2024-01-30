#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Num1, Num2,sum=0;
    while (true) 
    {
        cin >> Num2 >> Num1;
        if (Num1>0 and Num2>0)
        {
            for (int i = min(Num1, Num2); i <= max(Num1,Num2); i++)
            {
                sum += i;
                cout << i<<" ";
            }
                cout <<"sum ="<< sum << endl;
                sum = 0;
        }
        else
            break;
    }
    
}
