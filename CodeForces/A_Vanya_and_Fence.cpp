/*problem link: https://codeforces.com/problemset/problem/677/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    int arr[n],sum=0;
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];

        if(arr[i]>m)
            sum = sum + 2;
        else
            sum = sum + 1;
    }
    cout << sum;
}