#include<bits/stdc++.h>
using namespace std;
int main()
{
    int FirstNum, SecondNum,test,counter = 0,num;
    bool islucky = true;
    cin >> FirstNum >> SecondNum;
    for (int i = FirstNum; i <= SecondNum; i++)
    {
        test = i;
        num = i;
        islucky = true;
        while (num>=10)
        {
            test = num%10;
            if (test==4 or test==7)
                ;
            else
                islucky = false;
            num /= 10;
        }
        if (num==4 or num==7)
            ;
        else
            islucky = false;
        if (islucky==true)
        {
            cout << i << " " ; 
            counter++;   
        }
    }
    if (counter==0)
        cout << -1;
}

