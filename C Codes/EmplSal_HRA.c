#include <stdio.h>

int main()
{
    float basicSalary, HRA, DA, grossSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary < 1500)
    {
        HRA = basicSalary * 10 / 100;
        DA = basicSalary * 90 / 100;
    }
    else
    {
        HRA = 500;
        DA = basicSalary * 98 / 100;
    }

    grossSalary = basicSalary + HRA + DA;

    printf("Basic Salary = Rs. %.2f\n", basicSalary);
    printf("HRA = Rs. %.2f\n", HRA);
    printf("DA = Rs. %.2f\n", DA);
    printf("Gross Salary = Rs. %.2f\n", grossSalary);

    return 0;
}