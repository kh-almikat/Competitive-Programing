/*problem link: https://www.codechef.com/START256D/problems/SHARING */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if ((a + b) % 2 == 0)
    {
        int x = (a + b) / 2;
        cout << a - x << endl;
    }
    else
        cout << -1 << endl;

}