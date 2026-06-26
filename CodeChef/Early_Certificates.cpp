/*problem link: https://www.codechef.com/problems/EARLYWIN */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y;
        cin >> x >> y;

        string s1, s2;
        cin >> s1 >> s2;

        string ans = "";
        for (int i = 0; i < min(s1.size(), s2.size()); i++)
        {
            if (s1[i] == s2[i])
                ans += s1[i];
            else
                break;
        }
        cout << ans << endl;
    }

}