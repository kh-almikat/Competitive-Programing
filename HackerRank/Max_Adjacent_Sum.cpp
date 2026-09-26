#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int max_even = 0;
    int max_odd = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            max_even = max(max_even, v[i]);

        else
            max_odd = max(max_odd, v[i]);
    }

    int ans = max_even + max_odd;

    cout << ans;

}