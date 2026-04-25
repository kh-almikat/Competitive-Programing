/*problem link: https://codeforces.com/problemset/problem/136/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >>n;
    int arr[n],final[n];
    
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];

        final[arr[i]-1] = i + 1;
    }
    for (int i = 0; i < n;i++)
    {
        cout << final[i]<<" ";
    }
}