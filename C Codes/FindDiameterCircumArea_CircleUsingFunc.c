#include <stdio.h>

float diameter(float r)
{
    return 2 * r;
}

float circumference(float r)
{
    return 2 * 3.14159 * r;
}

float area(float r)
{
    return 3.14159 * r * r;
}

int main()
{
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Diameter = %.2f\n", diameter(r));
    printf("Circumference = %.2f\n", circumference(r));
    printf("Area = %.2f\n", area(r));

    return 0;
}