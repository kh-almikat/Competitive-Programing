/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long n, k;
    cin >> n >> k;

    vector<long long> arr(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());

    long long sum = 0;
    for (long long i = 0; i < k; i++)
    {
        if(arr[i] > 0)
            sum = sum + arr[i];
         else
            break;
    }
    cout << sum;

    return 0;
}