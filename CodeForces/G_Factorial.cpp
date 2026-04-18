#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        int m;
        cin >> m;
        long long factorial=1;
        for(int j=1; j<=m; j++)
        {
            factorial *= j;
        }
        cout << factorial << endl;

    }
}