/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;   
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e')
            e++;
        else if (s[i] == 'g')
            g++;
        else if (s[i] == 'y')
            y++;
        else if (s[i] == 'p')
            p++;
        else if (s[i] == 't')
            t++;

    }
    cout<< min({e, g, y, p, t}) << '\n';
}