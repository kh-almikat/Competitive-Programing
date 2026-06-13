#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int ans = -1;

    for(int i=0; i<n; i++)
    {
        int cur_price = arr[i];

        if(cur_price <= k)
        {
            ans = max(ans, cur_price);
        }
    }
    cout << ans << endl;
}