/*problem link: https://codeforces.com/problemset/problem/520/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> st;

    for(int i = 0; i < s.size(); i++)
    {
        char ch = tolower(s[i]);

        if(ch >= 'a' && ch <= 'z')
        {
            st.insert(ch);
        }
    }

    if(st.size() == 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}