/*problem link: https://www.codechef.com/problems/EZSPK */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                {
                    count++;
                    if(count>=4)
                        flag = 1;
                }
            else
                count = 0;
        }

        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
     
    }
}