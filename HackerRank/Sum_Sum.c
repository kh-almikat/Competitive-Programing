/*Problem link
https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-09/challenges/sum-sum-2
*/

#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int positive_sum = 0, negative_sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);


        if (arr[i] > 0) 
        {
            positive_sum += arr[i];
        }
         else if (arr[i] < 0) 
        {
            negative_sum += arr[i];
        }
    }
    printf("%d %d", positive_sum, negative_sum);


    return 0;
}