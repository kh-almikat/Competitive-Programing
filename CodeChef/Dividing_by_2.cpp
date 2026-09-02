/*problem link: https://www.codechef.com/problems/DIV2 */

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ans = 0;
        while(1)
        {
            sort(v.begin(), v.end());

            if (v[0] == v[n - 1])
                break;

            v[n - 1] /= 2;
            ans++;
        }

        cout << ans << endl;
    }
}