/*problem link: https://codeforces.com/problemset/problem/734/A */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int anton = 0, danik = 0;
    char arr[1000000];

    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];

        if(arr[i] == 'A')
            anton++;
        else
            danik++;
    }

    if(anton == danik)
        cout << "Friendship";
    else if (anton > danik)
        cout << "Anton";
    else
        cout << "Danik";
}