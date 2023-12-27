#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    float disc, new_price;
    float old_price;
    cin >> disc >> new_price;
    old_price = ((new_price * disc) / (100 - disc)) + new_price;
    // old_price = new_price * disc;
    cout << old_price;
}