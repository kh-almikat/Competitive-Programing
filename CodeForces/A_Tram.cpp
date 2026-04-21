/*problem link: https://codeforces.com/problemset/problem/116/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int out, in;
    int count = 0,max=0;
    for (int i = 0; i < n;i++)
    {
        cin >> out >> in;

        count = (count - out) + in;

        if(count>max)
        {
            max = count;
        }

    }
    cout << max;

}