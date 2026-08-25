/*problem link: https://codeforces.com/problemset/problem/1807/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    while(n--)
    {
        int a, b, x;
        cin >> a >> b >> x;

        if(a+b == x)
            cout << '+' << endl;
        else
            cout << '-' << endl;
    }
}