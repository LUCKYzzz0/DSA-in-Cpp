#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to find: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}