/*Problem link
https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-09/challenges/update-and-print */

#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);

    // Update the value at index x with v
    arr[x] = v;


    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}