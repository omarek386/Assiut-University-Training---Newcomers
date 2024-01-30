#include<bits/stdc++.h>
using namespace std;
int main()
{
    int HowManyNum;
    char Symbol;
    cin >> Symbol >> HowManyNum;
    int Numbers[HowManyNum];
    for (int i = 0; i < HowManyNum; i++)
    {
        cin >> Numbers[i];
    }
    for (int i = 0; i < HowManyNum; i++)
    {
        for (int j = 0; j < Numbers[i]; j++)
        {
            cout << Symbol;
        }
        cout << endl;
    }
    
}

