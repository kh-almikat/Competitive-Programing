/*problem link: https://codeforces.com/contest/2244/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int size, count = 0;
        cin >> size;

        string s;
        cin >> s;

        int maxx = 0;

        for (int i = 0; i < size; i++)
        {
            if (s[i] == '#')
            {
                count++;
                maxx = max(maxx, count);
            }

            else
                count = 0;
        }
        cout << (maxx + 1) / 2 << endl;
    }
}