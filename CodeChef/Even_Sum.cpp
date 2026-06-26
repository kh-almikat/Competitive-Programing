/*problem link: https://www.codechef.com/problems/EVENSUM1 */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n], total_sum = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];

            total_sum += a[i];
        }

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = total_sum - a[i];

            if (sum % 2 == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }
}