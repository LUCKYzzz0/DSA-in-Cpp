#include <stdio.h>

int main() {
    int arr[] = {10, 15, 20, 25, 30, 35};
    int n = 6;

    int even[6], odd[6];
    int e = 0, o = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[e] = arr[i];
            e++;
        } else {
            odd[o] = arr[i];
            o++;
        }
    }

    printf("Even elements: ");
    for (int i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements: ");
    for (int i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}