/*problem link: https://codeforces.com/problemset/problem/44/A */

#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int n;
    cin >> n;
    vector<pair<string,string>> v(n);
 
    for ( int i = 0; i < n; i++ ) 
    {
        cin >> v[i].first >> v[i].second;
    }
    sort ( v.begin(), v.end() );
    
    int Sz = unique ( v.begin(), v.end() ) - v.begin();
    cout << Sz << endl;
}
