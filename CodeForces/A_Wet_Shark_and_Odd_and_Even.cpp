/*problem link: https://codeforces.com/problemset/problem/621/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    long long a[n], sum = 0, min_odd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        sum += a[i];

        if (a[i] % 2 != 0)
        {
            min_odd = min(min_odd, a[i]);
        }
    }

        if (sum % 2 != 0) {
        sum -= min_odd;
    }

    cout << sum << endl;
}