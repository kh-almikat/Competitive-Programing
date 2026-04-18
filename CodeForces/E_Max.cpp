/*Problem link:  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E */ 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
       int a;
       cin >> a;
       
       v.push_back(a);

        
    }
    cout << *max_element(v.begin(), v.end()) << endl;

}