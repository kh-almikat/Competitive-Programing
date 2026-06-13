#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n],towcount=0,threecount=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
        {
            towcount++;
        }
        else if(arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            towcount++;
        }
        else if(arr[i] % 3 == 0)
        {
            threecount++;
        }
    }
    cout << towcount << " " << threecount << endl;
}