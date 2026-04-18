/*Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P */

#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int d = n / 1000;

    if(d%2 == 0)
        printf("EVEN");
    else
        printf("ODD");
    
    return 0;
}