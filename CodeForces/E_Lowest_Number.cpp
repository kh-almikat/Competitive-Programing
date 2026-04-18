/*Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E  */ 


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

    }
      
    int lowest = arr[0], found = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<lowest)
        {
            lowest = arr[i];
            found = i+1;
        }
    }
        
        
   

   
    cout<< lowest << " " << found << endl;
    

}