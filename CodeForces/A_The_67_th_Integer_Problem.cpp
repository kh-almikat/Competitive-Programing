/*problem link: https://codeforces.com/contest/2218/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];

        if (arr[i] == 67)
        {
            cout << "67\n";
        }
        else
        {
            arr[i]++;
            cout << arr[i] << "\n";
        }
    }
    
}