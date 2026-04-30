/*problem link: https://codeforces.com/contest/2227/problem/B */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;

        int first = 0, second = 0;
        
        for(int i = 0; i < x; i++)
        {

            if(s[i] == '(' )
                first++;
            else
                second++;
        }
        if(first == second)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}