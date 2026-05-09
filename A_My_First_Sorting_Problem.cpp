/*problem link: https://codeforces.com/problemset/problem/1971/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;

        cout << min(a, b) << " " << max(a, b) << endl;
    }
}