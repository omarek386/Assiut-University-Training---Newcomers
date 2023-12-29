#include <bits/stdc++.h>
using namespace std;
int main()
{
    string firstNumber;
    int size ,par,reverse=0,temp,num;
    cin >> firstNumber;
    size=firstNumber.size();
    par = stoi(firstNumber);
    num = par;
    for (int i = 0; i < size; i++)
    {
        temp = num%10;
        reverse = (reverse * 10) + temp;
        num/=10;
    }
    if (par==reverse) 
        cout << reverse << endl<<"YES"<<endl;
    else 
        cout << reverse << endl<<"NO"<<endl;   
    
}
