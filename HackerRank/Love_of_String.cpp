#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    string ans = s;

    for (int i = 0; i <= n-k; i++)
    {
        string s1 = s;

        sort(s1.begin() + i, s1.begin() + i + k);

        if(ans>s1)
            ans = s1;
    }

    cout << ans;
}