/*Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int d=n%10;
    int c=n/10;

    if (d>= c)
    {
        if(d%c==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if( c==0 || d==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        if(c%d==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}