#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,Max,temp;
    cin >> N;
    cin >> Max;
    for (int i = 1; i < N; i++)
    {
        cin >> temp;
        if (Max<temp )
            Max = temp;
    }
    cout << Max << endl;
    
}
