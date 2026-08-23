/*problem link: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b, x;
    cin >> a >> b >> x;

    bool flag = true;
    for (int i = a; i <= b; i++)
    {
        if (i % x == 0)
        {
            cout << i;
            flag = true;
            break;
        }
        else
            flag = false;
    }

    if(flag == false)
        cout << -1;
}