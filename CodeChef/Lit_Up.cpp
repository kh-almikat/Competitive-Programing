/*problem link: https://www.codechef.com/START257D/problems/LITUP */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];


        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                bool flag = true;

                for (int k = 0; k < n; k++)
                {
                    if (abs(i - k) > x && abs(j - k) > x)
                    {
                        flag = false;
                        break;
                    }
                }

                if (flag)
                    ans = min(ans, v[i] + v[j]);
            }
        }

        if (ans == INT_MAX)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}