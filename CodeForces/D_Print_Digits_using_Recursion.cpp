/*problem linl: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D */

#include <bits/stdc++.h>
using namespace std;

void rec(int x)
{
    if(x == 0)
    {
        return;
    }
    int ans = x % 10;
    rec(x / 10);

    cout << ans << " ";
}

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(x == 0)
            cout << "0";
        else
            rec(x);
        cout << endl;
    }
}