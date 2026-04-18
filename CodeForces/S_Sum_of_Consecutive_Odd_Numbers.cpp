/*Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S */

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    for(int j=1; j<=t; j++)
    {
        int n,m;
        cin >> n >> m;

        int sum = 0;
        if(n>m)
        {
            for(int i=m+1; i<n; i++)
            {
                if(i%2!=0)
                {
                    sum+=i;
                }
            }
        }
        else
        {
            for(int i=n+1; i<m; i++)
            {
                if(i%2!=0)
                {
                    sum+=i;
                }
            }
        }
        cout << sum << endl;
    }
}