#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long start1, end1, start2, end2;
    cin >> start1 >> end1 >> start2 >> end2;
    // if (m > x && m < y)
    // {
    //     cout << m <<" ";
    //     h++;
    // }
    // if (y >= m && y <= n)
    // {
    //     cout << y << " " ;
    //     h++;
    // }
    // if (x > m && x < n)
    // {
    //     cout << x<<" ";
    //     h++;
    // }
    // if (n >= x && n <= y)
    // {
    //     cout << n<<" ";
    //     h++;
    // }
    // if (h == 0)
    // {
    //     cout << -1;
    // }
    if (max(start1, start2) > min(end1, end2))
    {
        cout << -1;
    }
    else
        cout << max(start1, start2) <<" "<< min(end1, end2);
}