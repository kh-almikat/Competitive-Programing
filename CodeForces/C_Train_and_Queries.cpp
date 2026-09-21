/*problem link: https://codeforces.com/problemset/problem/1702/C */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            mp[x].push_back(i);
        }

        while (m--)
        {
            int start, stop;
            cin >> start >> stop;

            if (mp.find(start) == mp.end() || mp.find(stop) == mp.end())
            {
                cout << "NO" << endl;
            }
            else
            {
                int left = mp[start].front();
                int right = mp[stop].back();

                if (left < right)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    
}