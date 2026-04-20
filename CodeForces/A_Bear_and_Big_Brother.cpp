/*problem link: https://codeforces.com/problemset/problem/791/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    int ans = 0;
    while(n <= m)
    {
        n = n * 3;
        m = m * 2;
        ans++;
    }
    cout << ans;
}