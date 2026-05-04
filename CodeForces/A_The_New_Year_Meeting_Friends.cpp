/*problem link: https://codeforces.com/problemset/problem/723/A */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> v = {x1, x2, x3};
    sort(v.begin(), v.end());

    int answer;
   
    answer = abs(v[0] - v[1]) + abs(v[2] - v[1]);

    cout << answer << endl;
}