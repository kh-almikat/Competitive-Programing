/*problem link: https://codeforces.com/problemset/problem/501/B */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    map<string, string> mp;

    while (q--)
    {
        string old, newhandle;
        cin >> old >> newhandle;

        if (mp.find(old) == mp.end())
        {
            mp[old] = old;
        }

        mp[newhandle] = mp[old];
        mp.erase(old);
    }

    cout << mp.size() << endl;

    for (auto x : mp)
    {
        cout << x.second << " " << x.first << endl;
    }
}