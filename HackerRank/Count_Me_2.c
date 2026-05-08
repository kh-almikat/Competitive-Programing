/*problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-09/challenges/count-me-2-2 */

#include <stdio.h>

int main() 
{
    char str[1000001];
    scanf("%s", str);
    int consonant_count = 0, vowel_count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        {
            vowel_count++;
        }
        else if ((ch >= 'a' && ch <= 'z') )
        {
            consonant_count++;
        }
    }
    printf("%d", consonant_count);
    return 0;
}