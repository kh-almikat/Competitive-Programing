/*problem link: https://www.codechef.com/problems/P3235 */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, count = 0;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int left = 0, right = 0;

            for (int j = 0; j < i; j++)
            {
                if (arr[j] < arr[i])
                    left++;
            }

            for (int j = i; j < n; j++)
            {
                if (arr[j] > arr[i])
                    right++;
            }

            if(left == right)
                ans++;
        }

        cout << ans << endl;
    }
}