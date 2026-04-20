/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int a, b;
        cin >> a >> b;
        if(a == b)
        {
            cout << "Square\n";
        }
        else
        {
            cout << "Rectangle\n";
        }
    }
}