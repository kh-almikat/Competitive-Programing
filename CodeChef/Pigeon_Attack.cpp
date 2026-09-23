/*problem link: https://www.codechef.com/START257D/problems/PGNATK */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        int ans = 0;
        while(n > 0)
        {
            ans++;

            if(ans%k != 0)
                n--;
        }
        cout << ans << endl;
    }
}