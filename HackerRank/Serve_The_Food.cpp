#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    queue<int> q;

    while (t--)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int y;
            cin >> y;

            q.push(y);
        }
        else
        {
            if (q.empty())
                cout << "-1" << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
}