/*problem link: https://codeforces.com/problemset/problem/1927/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int first_pos = -1, last_pos = -1;

        first_pos = s.find('B');
        last_pos = s.rfind('B');

        cout<< last_pos - first_pos + 1 << endl;
    }
}