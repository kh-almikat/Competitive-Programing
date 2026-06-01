/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long a, b, x;
    cin >> a >> b >> x;

    if (a % x == 0 && b % x == 0)
        cout << "Both";
    else if (a % x == 0 && b % x != 0)
        cout << "Memo";
    else if (b % x == 0 && a % x != 0)
        cout << "Momo";
    else
        cout << "No One";
}