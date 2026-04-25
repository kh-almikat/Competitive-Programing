/*problem link: https://codeforces.com/problemset/problem/200/B */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    double sum = 0,x;
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    x = sum / n;
    
    cout << fixed << setprecision(12) << x;

}