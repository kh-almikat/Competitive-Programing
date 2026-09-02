/*problem link: https://www.codechef.com/START254D/problems/MAXSUM77 */

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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ans = 0;
        for (int i = 0; i <=  k; i++)
        {
            int sum = 0;
            for (int j = i; j < n - k + i; j++)
            {
                sum += v[j];
            }
            ans = max(ans, sum);
        }

        cout << ans<< endl;
        
    }
}