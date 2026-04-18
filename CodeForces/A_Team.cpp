/*problem link: https://codeforces.com/problemset/problem/231/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,found=0;
    cin >> n;
    while (n--) 
    {
        bool a, b, c;

        cin >> a >> b >> c;
        if (a + b + c >= 2) 
        {
            found++;
        } 

    }
    cout << found << endl;
    
}