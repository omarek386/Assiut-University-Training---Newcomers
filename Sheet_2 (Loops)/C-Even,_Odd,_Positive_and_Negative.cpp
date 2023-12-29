#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int N,even=0,odd=0,pos=0,neg=0;
//     cin >> N;
//     int a[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < N; i++)
//     {
//         if (a[i]%2==0 )
//             even++;
//         if (a[i]%2!=0)
//             odd++;
//         if (a[i]>0)
//             pos++;
//         if (a[i]<0)
//             neg++;            
//     }
//     cout << "Even: " <<even<<endl;
//     cout << "Odd: " <<odd<<endl;
//     cout << "Positive: " <<pos<<endl;
//     cout << "Negative: " <<neg<<endl;
// }
int main()
{
    int N,even=0,odd=0,neg=0,pos=0,temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (temp%2==0 )
            even++;
        if (temp%2!=0)
            odd++;
        if (temp>0)
            pos++;
        if (temp<0)
            neg++; 
    }
    cout << "Even: " <<even<<endl;
    cout << "Odd: " <<odd<<endl;
    cout << "Positive: " <<pos<<endl;
    cout << "Negative: " <<neg<<endl;
    
}

