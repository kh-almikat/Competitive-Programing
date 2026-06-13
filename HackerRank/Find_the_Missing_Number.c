#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    while (n--) 
    {
        long long x, a, b, c;
        scanf("%lld %lld %lld %lld", &x, &a, &b, &c);

        long long mul = a * b * c;

        if (mul == 0) 
        {
            if (x == 0)
                printf("0\n");
            else
                printf("-1\n");
        } 
        else 
        {
            if (x % mul == 0)
                printf("%lld\n", x / mul);
            else
                printf("-1\n");
        }
    }

    return 0;
}