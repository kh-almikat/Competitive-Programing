/*problem link: https://www.codechef.com/START255D/problems/ADDIS */

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

        int mx = 1, count = 1;
        sort(v.begin(), v.end());

        for (int i = 1; i < n; i++)
        {
            if(v[i] == v[i-1])
                count++;

            else
                count = 1;

            mx = max(mx, count);
        }

        cout << (mx + 1) / 2 << endl;
    }
}