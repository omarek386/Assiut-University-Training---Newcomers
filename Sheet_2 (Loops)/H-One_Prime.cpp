#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberUwantToCheck,counter=0;
    cin >> numberUwantToCheck;
    for (int i = 2; i < numberUwantToCheck; i++)
    {
        if (numberUwantToCheck%i == 0){
            cout << "NO" << endl;
            counter++;   
            break;}
        else
            continue;
    }
    if (counter==0)
        cout << "YES" << endl;
    
}
