/* problem link: https://codeforces.com/problemset/problem/282/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,sum=0;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s == "X++" || s == "++X") 
        {
            sum++;
        } 
        else 
        {
            sum--;
        }
    }
    cout << sum << endl;
}