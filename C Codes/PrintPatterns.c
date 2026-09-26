#include <stdio.h>

int main()
{
    int i, j;

    /* Pattern 1 */
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n");

    /* Pattern 2 */
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }

    printf("\n");

    /* Pattern 3 */
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }

    printf("\n");

    /* Pattern 4 */
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%c", 'A' + j - 1);
        printf("\n");
    }

    return 0;
}