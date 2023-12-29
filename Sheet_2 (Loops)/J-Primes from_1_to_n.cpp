#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number,counter=0;
    cin >> number;
    for (int i = 2; i <= number; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i == 2)
                continue;
            else if (i%j==0)
                counter++;
        }
        if (counter==0)
            if(number)
                cout << i<<" ";
        counter = 0;
    }
    
}