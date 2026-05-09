/*problem link: https://codeforces.com/problemset/problem/707/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    char arr[n][m];

    int  count_color = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 'C' || arr[i][j] == 'Y' || arr[i][j] == 'M')
            {
                count_color++;
            }
        }
    }
    

    if(count_color > 0)
        cout << "#Color";
    else
        cout << "#Black&White";
}