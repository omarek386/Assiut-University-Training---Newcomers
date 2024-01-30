#include <bits/stdc++.h>
using namespace std;
main(){
    int n,counter = 0,num=1;
    cin >>n;
    for (int i=1; i<=n; i++)
    {
        while (counter<n)
        {
            if (num%4==0){
                cout << "PUM" << endl;
                counter++;}
            else
                cout << num << ' ';
            num++;
        }
        
    }
}