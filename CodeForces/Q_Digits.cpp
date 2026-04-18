#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string s;
        cin >> s;

        reverse(s.begin(), s.end());

        for(auto u : s)
        {
            cout << u << " ";
        }

        cout << endl;
    }

    return 0;
}