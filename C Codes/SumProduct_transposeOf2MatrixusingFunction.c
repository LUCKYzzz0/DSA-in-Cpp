#include <stdio.h>

void sum(int a[10][10], int b[10][10], int r, int c)
{
    int i, j;

    printf("\nSum of Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
}

void product(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2)
{
    int i, j, k, p[10][10] = {0};

    if (c1 != r2)
    {
        printf("\nMatrix multiplication not possible.\n");
        return;
    }

    printf("\nProduct of Matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
                p[i][j] += a[i][k] * b[k][j];

            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[10][10], int r, int c)
{
    int i, j;

    printf("\nTranspose of Matrix:\n");

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if (r1 == r2 && c1 == c2)
        sum(a, b, r1, c1);
    else
        printf("\nMatrix addition not possible.\n");

    product(a, b, r1, c1, r2, c2);

    printf("\nTranspose of First Matrix:");
    transpose(a, r1, c1);

    printf("\nTranspose of Second Matrix:");
    transpose(b, r2, c2);

    return 0;
}