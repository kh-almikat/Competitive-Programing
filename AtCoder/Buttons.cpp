/*problem link: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
        cout << a + b;

    else
    {
        int mx = max(a, b);

        cout << mx + (mx - 1);
    }
}