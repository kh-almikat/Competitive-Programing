/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    char s[10000001];
    fgets(s, 10000001, stdin);
    
    for(int i = 0; s[i] != '\\'; i++)
    {
      cout << s[i];
    }
}