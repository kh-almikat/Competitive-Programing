/*problem link: https://codeforces.com/problemset/problem/1703/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n--) 
    {
        string s;
        cin >> s;
        
        if (s == "YES" || s == "YEs" || s == "YeS" || s == "yES" || s == "Yes" || s == "yEs" || s == "yeS" || s == "yes") 
        {
            cout << "YES\n";
        } 
        else 
        {
            cout << "NO\n";
        }
    }
}