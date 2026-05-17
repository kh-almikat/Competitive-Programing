/*[roblem link: https://codeforces.com/contest/2195/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    while (n--)
    {
        int x, found = 0;
        cin >> x;
        vector<int> v(x);
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];

            if (v[i] == 67)
                found = 1;
        }
        
        if(found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
}