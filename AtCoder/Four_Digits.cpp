/*problem link: https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    if(s.size() == 1)
        cout << "000" << s;
    
    else if(s.size() == 2)
        cout << "00" << s;

    else if(s.size() == 3)
        cout << "0" << s;

    else
        cout << s;
}