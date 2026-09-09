/*problem link: https://www.codechef.com/START255D/problems/UNQSHF */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        string A, B;

        cin >> n;
        cin >> A >> B;

        int a = 0;
        int b = 0;

        for (int i = 0; i < n; i++) {
            if (A[i] == 'a')
                a++;

            if (B[i] == 'b')
                b++;
        }

        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}