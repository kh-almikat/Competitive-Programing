/*problem link: https://codeforces.com/problemset/problem/469/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >>n;
    
    set<int> s;

    int a;
    cin >> a;
    for(int i = 0; i < a;i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    int b;
    cin >> b;
    for(int i = 0; i < b;i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() == n )
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}