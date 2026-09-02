/*problem link: https://www.codechef.com/START254D/problems/REACHWT */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        cout << (x / 2) * 30 + (x % 2) * 20 << endl;
    }
}