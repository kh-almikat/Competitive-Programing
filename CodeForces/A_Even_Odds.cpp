/*problem link: https://codeforces.com/problemset/problem/318/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    vector<int> v;

    for (int i = 1; i <= n;i=i+2)
    {
        v.push_back(i);
    }
    for (int i = 2; i <= n;i=i+2)
    {
        v.push_back(i);
    }

    cout << v[m-1];
}