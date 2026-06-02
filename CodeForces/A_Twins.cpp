/*problem link: https://codeforces.com/problemset/problem/160/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , x , sum = 0 , running_sum = 0;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum = sum + x;
        v.push_back(x);
    }
    
    sort(v.rbegin(), v.rend());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        running_sum = running_sum + v[i];
        count++;

        if( running_sum > (sum - running_sum ) )
        {
            break;
        }
    }

    cout << count;
}