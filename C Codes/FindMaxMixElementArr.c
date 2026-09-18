#include <stdio.h>

int main() {
    int arr[] = {10, 25, 5, 40, 15};
    int n = 5;

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}