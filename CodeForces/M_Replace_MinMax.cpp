/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    int min = arr[0],minIndex = 0;
    int max = arr[0],maxIndex = 0;

    for (int i = 1; i < n;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
        if(arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    arr[minIndex] = max;
    arr[maxIndex] = min;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}