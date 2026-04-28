/*problem link: https://codeforces.com/problemset/problem/144/A */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, moves = 0;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int max_index = 0;
    int min_index = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[max_index])
            max_index = i;

        if(arr[i] <= arr[min_index])
            min_index = i;
    }

    if(max_index > min_index)
        min_index++;

    moves = max_index + (n - 1 - min_index);
    cout << moves << endl;
}