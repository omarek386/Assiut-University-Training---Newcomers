#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Numbers ,temp;
    cin >>Numbers ;
    temp = Numbers-2;
    for (int j = 0; j < Numbers; j++)
    {
        for (int i = 0; i <= temp; i++)
        {
            cout << " ";
        }
        temp -= 1;
        for (int i = 0; i <= j; i++)
        {
            cout <<"*";
        }
        for (int i = 1; i <= j; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

