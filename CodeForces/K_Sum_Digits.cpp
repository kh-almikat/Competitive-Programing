/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    long long sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += s[i] - 48;
    }

    cout << sum;

    return 0;
}