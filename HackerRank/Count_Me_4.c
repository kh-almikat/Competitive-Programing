/*problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-09/challenges/count-me-4*/

#include <stdio.h>

int main() 
{
    char s[1000001];
    scanf("%s", s);

    int fre[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                fre[s[i] - 'a']++;
            }
        }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c - %d\n", 'a' + i, fre[i]);
        }
    }

    return 0;
}