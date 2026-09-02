/*problem link: https://www.codechef.com/START253D/problems/POSHOP */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mx = a[0];

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] >= a[i])
                {
                    int sum = a[i] + a[j];
                    mx = max(mx, sum);
                }
            }
        }

        cout << mx << endl;
    }
}