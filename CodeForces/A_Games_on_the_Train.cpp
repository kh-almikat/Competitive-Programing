/*problem link: https://codeforces.com/contest/2236/problem/A */

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

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int max_height = a[n - 1] - a[0] + 1;

        cout << max_height << endl;
    }
}