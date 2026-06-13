#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    while(n--)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int total_work = M1 * D;
        int new_days = total_work / (M1 + M2);

        int result= D - new_days;

        printf("%d\n", result);
    }
    
    return 0;
}