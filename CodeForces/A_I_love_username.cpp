/*problem link: https://codeforces.com/problemset/problem/155/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int max = a[0];
    int min = a[0];
    int count = 0;

    for (int i = 1; i < n ; i++) 
    {
        if (a[i] > max) 
        {
            max = a[i];
            count++;
        }
        else if (a[i] < min) 
        {
            min = a[i];
            count++;
        }
    }
    cout << count << endl;
}