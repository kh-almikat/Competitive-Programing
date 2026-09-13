/*problem link: https://codeforces.com/problemset/problem/368/B */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n + 1), count(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    set<int> s;

    for (int i = n; i >= 1; i--)
    {
        s.insert(v[i]);
        count[i] = s.size();
    }

    for (int i = 1; i <= n; i++)
    {
        int l;
        cin >> l;

        cout << count[l] << endl;
    }
}