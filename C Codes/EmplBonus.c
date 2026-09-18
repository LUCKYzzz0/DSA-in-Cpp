#include <stdio.h>

int main()
{
    int currentYear, joiningYear, yearsOfService;

    printf("Enter current year: ");
    scanf("%d", &currentYear);

    printf("Enter joining year: ");
    scanf("%d", &joiningYear);

    yearsOfService = currentYear - joiningYear;

    if (yearsOfService > 3)
    {
        printf("Bonus = Rs. 2500");
    }

    return 0;
}