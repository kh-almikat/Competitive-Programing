/*problem link: https://www.codechef.com/START253D/problems/REGCLN */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 10)
        cout << 10 - n;
    else if (n < 20)
        cout << 20 - n;
    else if (n < 30)
        cout << 30 - n;
    else if (n < 40)
        cout << 40 - n;
    else if (n < 50)
        cout << 50 - n;
    else if (n < 60)
        cout << 60 - n;
    else if (n < 70)
        cout << 70 - n;
    else if (n < 80)
        cout << 80 - n;
    else if (n < 90)
        cout << 90 - n;
    else if (n < 100)
        cout << 100 - n;
    else
        cout << 10;
}