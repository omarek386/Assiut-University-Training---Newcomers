#include <bits/stdc++.h>
using namespace std;
int gitSum(int m){
    int sum = 0;
    while (m)
    {
        sum += m%10;
        m /= 10;
    }
    return sum;
    
}
main() {
    int a, b, c,sum=0,num;
    cin >> a >> b >> c ;
    for (int i = 1; i <=a; i++)
    {
        num = gitSum(i);
        if (num >= min(b,c) and num <= max(b,c))
            sum += i;
    }
    cout << sum ;
}
