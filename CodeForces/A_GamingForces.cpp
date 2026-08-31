/*problem link: https://codeforces.com/problemset/problem/1792/A */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count1 = 0, count_other = 0;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] == 1)
                count1++;
            else
                count_other++;
        }

        int ans = count_other + (count1 + 1) / 2;

        cout << ans << endl;
    }
}