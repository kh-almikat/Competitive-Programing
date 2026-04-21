/*problem link: https://codeforces.com/problemset/problem/1030/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n],found=0;

    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];

        if(arr[i] == 1)
        {
            found++;
        }

    }  

    if(found>=1)
        cout << "HARD";
    else
        cout << "EASY";
}