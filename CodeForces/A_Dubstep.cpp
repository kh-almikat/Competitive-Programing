/*problem link: https://codeforces.com/problemset/problem/208/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); )
    {
        if(s.substr(i,3) == "WUB")
        {
            cout << " ";
            i = i + 3;
        }
        else
        {
            cout << s[i];
            i++;
        }

    }
}