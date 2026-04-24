/*problem link: https://codeforces.com/problemset/problem/344/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,count=1;
    string x,y;
    cin >> n;
    cin >> x;

    for (int i = 1; i < n-1;i++)
    {
        cin >> y;
        if(y != x)
        {
            count++;
            x = y;
        }
    }
    cout << count;
}