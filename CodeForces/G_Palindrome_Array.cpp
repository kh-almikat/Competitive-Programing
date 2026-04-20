/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    bool isPalindrome = true;
    
    for (int i = 0; i < n;i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

}