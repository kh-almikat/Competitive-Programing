/*Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        if (arr[i]<10)
        {
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }

}