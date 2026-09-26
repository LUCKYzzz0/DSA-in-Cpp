#include <stdio.h>

int main()
{
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic < 1500)
    {
        hra = 0.10 * basic;
        da = 0.90 * basic;
    }
    else
    {
        hra = 500;
        da = 0.98 * basic;
    }

    gross = basic + hra + da;

    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f", gross);

    return 0;
}