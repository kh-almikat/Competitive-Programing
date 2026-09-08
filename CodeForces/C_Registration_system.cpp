/*problem link: https://codeforces.com/problemset/problem/4/C */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    unordered_map<string, int> m;
    while(t--)
    {
        string s;
        cin >> s;

        if (m.find(s) == m.end())
        {
            m[s] = 0;
            cout << "OK" << endl;
        }
        else
        {
            m[s]++;
            cout << s << m[s] << endl;
        }
    }
}