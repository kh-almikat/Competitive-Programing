/*problem link: https://codeforces.com/problemset/problem/1703/C */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) 
            cin >> a[i];
        

        for (int i = 0; i < n; i++) 
        {
            int m;
            string s;

            cin >> m >> s;

            for (int j = 0; j < m; j++) 
            {
                if (s[j] == 'D') 
                {
                    a[i]++;

                    if (a[i] == 10)
                        a[i] = 0;
                }
                else 
                {
                    a[i]--;

                    if (a[i] == -1)
                        a[i] = 9;
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;
    }

    return 0;
}