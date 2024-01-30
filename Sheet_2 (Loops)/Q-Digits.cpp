#include<bits/stdc++.h>
using namespace std;
int main()
{
    int HowManyNum,LastNum;
    cin >> HowManyNum;
    int Numbers[HowManyNum];
    for (int i = 0; i < HowManyNum; i++)
    {
        cin >> Numbers[i];
    }
    for (int i = 0; i < HowManyNum; i++)
    {
        while (Numbers[i] >= 10)
        {
            LastNum = Numbers[i]%10;
            cout << LastNum<<' ';
            Numbers[i] /= 10;
        }
        cout << Numbers[i]<<endl;
    }
    
}