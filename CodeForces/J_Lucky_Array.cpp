/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mn = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
            mn = arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mn)
            count++;
    }

    if (count % 2 == 1)
        cout << "Lucky";
    else
        cout << "Unlucky";

    return 0;
}