#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, x;
        cin >> s >> x;

        int i = 0;
        while (i <= (int)s.size() - (int)x.size()) 
        {
            if (s.substr(i, x.size()) == x)
            {
                s.replace(i, x.size(), "#");
                i++;  
            }
            else
            {
                i++;
            }
        }
        cout << s << "\n";
    }
}