/*problem link : https://www.codechef.com/problems/COOLER7 */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        int sum = 0;
        for (int i = n; i > m; i--)
        {
            sum = sum + i;
        }

        cout << sum << endl;
    }
}