 
// #include <stdio.h>

// int main() {
//      int arr[]={1,2,3,4,5,6,7,8,9,10};
//      int n=sizeof(arr)/ sizeof(arr[0]);
     
//     printf("Array Elements  :");
// for(int i=0; i<n;i++){
    

// printf("%d  ",arr[i]);
// }
// printf( "\\t");
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int arr[] = {5, 10, 15, 99, 102};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Array Elements: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d   ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }






#include <stdio.h>
int main() {
    int arr[] = {5,10,15};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 0;

    printf("Array Elements: ");
    for (int i = 0; i < n; i++) {
        // printf("%d   ", arr[i]);
        sum+= arr[i]; // Assuming you want to sum the elements
         

    }
     printf("Sum of array elements: %d\n", sum);
    return 0;
}