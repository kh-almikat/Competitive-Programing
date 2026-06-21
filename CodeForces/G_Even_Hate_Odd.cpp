/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        int even = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] % 2 == 0)
                even++;
        }

        if(n % 2)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << abs(even - n/2) << '\n';
        }
    }
}