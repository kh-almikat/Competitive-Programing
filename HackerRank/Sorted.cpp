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

        vector<int> c(n);
        for (int i = 0; i < n; i++)
            c[i] = v[i];

        sort(v.begin(), v.end());

        bool flag = false;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] == c[i])
            {
                count++;
                if (count == n)
                    flag = true;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}