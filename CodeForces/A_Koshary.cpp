/*problem link: https://codeforces.com/contest/2227/problem/A */

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

        if(a%2==1 && b%2==1 )
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}