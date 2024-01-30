#include <bits/stdc++.h>
using namespace std;
int main()
{
    int HowManyNum,num1,num2,sum=0;
    cin >> HowManyNum;
    for (int i = 0; i < HowManyNum; i++)
    {
        cin >> num1>>num2;
        for (int j = min(num1,num2)+1; j < max(num1,num2); j++)
        {
            if (j%2==0)
                ;
            else
            {
                sum += j;
            }    
        }
        cout << sum << endl;
        sum = 0;
    }
    
}
