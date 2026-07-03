#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[j] == a[i])
                flag = true;
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}