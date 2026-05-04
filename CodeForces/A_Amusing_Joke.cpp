/*problem link: https://codeforces.com/problemset/problem/141/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    multiset<char> set1,set3;

    for (char c : s1) {
        set1.insert(c);
    }
    for (char c : s2) {
        set1.insert(c);
    }
    for (char c : s3) {
        set3.insert(c);
    }

    if(set1 == set3)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}