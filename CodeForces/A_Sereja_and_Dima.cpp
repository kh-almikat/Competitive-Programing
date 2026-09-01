/*problem link: https://codeforces.com/problemset/problem/381/A */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    vector<int> v(a);

    for (int i = 0; i < a; i++)
        cin >> v[i];

    int s = 0, d = 0;
    int f1 = 1;

    while (!v.empty())
    {
        if (f1 == 1)
        {
            if (v[0] > v.back())
            {
                s += v[0];
                v.erase(v.begin());
            }
            else
            {
                s += v.back();
                v.pop_back();
            }

            f1 = 0;
        }
        else
        {
            if (v[0] > v.back())
            {
                d += v[0];
                v.erase(v.begin());
            }
            else
            {
                d += v.back();
                v.pop_back();
            }

            f1 = 1;
        }
    }

    cout << s << " " << d << endl;

}