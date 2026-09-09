/*problem link: https://www.codechef.com/START255D/problems/EGGBUY */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, f;
    cin >> a >> b >> f;

    int x = a * 12;
    int y = b * 12 + f;

    int mini = min(x, y);

    cout << mini << endl;

    return 0;
}