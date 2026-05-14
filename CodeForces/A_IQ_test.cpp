/*problem link: https://codeforces.com/problemset/problem/25/A */

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n, count_even = 0, count_odd = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
            count_even++;
        else
            count_odd++;
    }

    for (int i = 0; i < n; i++)
    {
        if(count_even > count_odd)
        {
            if(arr[i] % 2 != 0)
            {
                cout << i + 1;
                break;
            }
        }
        else
        {
            if(arr[i] % 2 == 0)
            {
                cout << i + 1;
                break;
            }
        }
    }

        
}