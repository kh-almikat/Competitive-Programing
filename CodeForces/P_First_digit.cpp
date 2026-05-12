/*Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    int d = n / 1000;

    if(d%2 == 0)
        cout<<"EVEN"<<endl;
    else
        cout<<"ODD"<<endl;
    
    return 0;
}