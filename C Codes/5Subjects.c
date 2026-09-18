//This Code is Exclusively Written by Lucky :)
#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 60)
    {
        printf("First Division");
    }
    else if (percentage >= 50)
    {
        printf("Second Division");
    }
    else if (percentage >= 40)
    {
        printf("Third Division");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}