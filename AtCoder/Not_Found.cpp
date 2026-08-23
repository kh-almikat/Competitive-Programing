/*problem link: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    int fre[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        fre[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] == 0)
        {
            cout << char(i + 'a');
            return 0;
        }
    }

    cout << "None";
}