/*problem link: https://codeforces.com/contest/2259/problem/B */

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

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int odd = 0, even_0 = 0, even_2 = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if(a[i]%2 == 1)
                odd++;
            
            else
            {
                if ((a[i] / 2) % 2 == 1)
                    even_0++;
                else
                    even_2++;
            }
        }
        ans = max({ans, odd, even_0, even_2});
        cout << ans << endl;
    }
}