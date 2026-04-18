/* problem link: https://codeforces.com/problemset/problem/158/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m, count =0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];

    }
    for(int i = 0; i < n; i++) 
    {
        if (a[i] >= a[m-1] && a[i] > 0) 
        {
            count++;
        }
    }
    cout << count << endl;


}