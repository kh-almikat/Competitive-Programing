#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int MEX = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == MEX) 
        {
            MEX++;
        }
    }
    cout << MEX << endl;
}

// MEX (minimum excluded value) - missing smallest non-negative integer in the array.