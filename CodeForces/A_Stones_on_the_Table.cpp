/*problem link: https://codeforces.com/problemset/problem/266/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,count=0;
    cin >> n;

    string s;
    for (int i = 0; i < n;i++)
    {
        cin >> s;
    }
    for (int i = 0; i < n;i++)
    {
        if(s[i+1] == s[i])
        {
            count++;
        }

    }
    cout << count;
}