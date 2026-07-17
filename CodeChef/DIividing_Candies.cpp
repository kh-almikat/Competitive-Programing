/*problem link: https://www.codechef.com/problems/DIVKIDS */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            int y = v[i];

            if(y % x == 0)
            {
                a.push_back(y);
            }
        }

        if(a.empty())
            cout << 0 << endl;
        else
        {
            sort(a.begin(), a.end());
            cout << a.back() << endl;
        }
    }
}