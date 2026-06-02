/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I */

#include <bits/stdc++.h>
using namespace std;

int rec(string s,int i)
{
    if(i == s.size())
    {
        return 0;
    }

    int count = rec(s, i + 1);

    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'
     || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main() 
{
    string s;
    getline(cin, s);

    int ans = rec(s, 0);
    cout << ans;
}