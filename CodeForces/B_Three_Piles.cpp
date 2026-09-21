/*problem link: https://codeforces.com/contest/2266/problem/B */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long diff = abs(a - b);
        long long ans;

        if (a >= b)
        {
            ans = diff + c;
        }
        else
        {
            ans = max(diff, abs(c - diff));
        }

        cout << ans << endl;
    }
}