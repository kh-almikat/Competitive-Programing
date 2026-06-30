/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];

        if(v[i] == 0)
            cout << "0" << " ";
        else if(v[i] > 0)
            cout << "1" << " ";
        else
            cout << "2" << " ";
    }

}