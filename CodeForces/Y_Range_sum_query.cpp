/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, q;
    cin >> n >> q;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    while(q--)
    {
        int x, y;
        cin >> x >> y;

        int sum = 0;
        for (int i = x-1; i <= y-1; i++)
        {
            sum = sum + v[i];
        }
        cout << sum << endl;
    }
}