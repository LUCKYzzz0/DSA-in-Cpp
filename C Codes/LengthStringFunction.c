#include <stdio.h>
//As Question says it's user defined not predefined Question 
int findLength(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return i;
}

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    gets(str);

    length = findLength(str);

    printf("Length of string = %d", length);

    return 0;
}