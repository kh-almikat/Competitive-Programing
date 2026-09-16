/*problem link: https://www.codechef.com/START256D/problems/BUSSEAT */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n < k)
        {
            int x = abs(n - k) * 2;
            cout << x << endl;
        }
        else
            cout << 0 << endl;
    }
}