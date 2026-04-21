/*problem link:https://codeforces.com/problemset/problem/110/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n.size();i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
            
        }
    }
    if(count == n.size())
        cout << "YES";
    else
        cout << "NO";
}