/*problem link: https://codeforces.com/problemset/problem/580/A*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) 
        cin >> v[i];

    int count = 1;
    int maxCount = 1;
    for (int i = 1; i < n; i++) 
    {
        if (v[i-1] <= v[i])
            count++;
        else
            count = 1;
        
        maxCount = max(maxCount, count);
    }

    cout << maxCount << endl;
}