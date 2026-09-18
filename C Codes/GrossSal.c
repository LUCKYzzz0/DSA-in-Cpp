//This is Code is written by Lucky :)
#include <stdio.h>

int main()
{
    float basicSalary, HRA, DA, grossSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000)
    {
        HRA = basicSalary * 20 / 100;
        DA = basicSalary * 80 / 100;
    }
    else if (basicSalary <= 20000)
    {
        HRA = basicSalary * 25 / 100;
        DA = basicSalary * 90 / 100;
    }
    else
    {
        HRA = basicSalary * 30 / 100;
        DA = basicSalary * 95 / 100;
    }

    grossSalary = basicSalary + HRA + DA;

    printf("Basic Salary = Rs. %.2f\n", basicSalary);
    printf("HRA = Rs. %.2f\n", HRA);
    printf("DA = Rs. %.2f\n", DA);
    printf("Gross Salary = Rs. %.2f\n", grossSalary);

    return 0; 
}