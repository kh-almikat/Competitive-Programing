/*problem link: https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-09/challenges/count-before-one-1 */

#include <stdio.h>

int count_before_one(int arr[], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            return count;
        }
        count++;
    }

    return count; 
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = count_before_one(arr, n);

    printf("%d", result);

    return 0;
}