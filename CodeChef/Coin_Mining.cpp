/*problem link: https://www.codechef.com/START255D/problems/BTCMINE */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y;
        cin >> x >> y;

        int day = 0, profit = 0;

        while(profit <= 0)
        {
            day++;
            
            int income = y * (day * day);

            profit += income - x;
        }

        cout << day << endl;
    }
}