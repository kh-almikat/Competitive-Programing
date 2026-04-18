/*Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int found=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            cout << i << endl;
            found=1;
        }

    }
    if(!found)
    {
        cout << -1;
    }
     cout << endl;
}