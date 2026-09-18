#include <stdio.h>
// declaration section
int sum(int a, int b);
int main(){

 int a,b;
    printf("Enter two numbers ,,to perform addition:\n");
    printf("First Number: ",a);
    scanf("%d",&a);
    printf("Second Number: ",b);
    scanf("%d",&b);
    // function call
int s= sum(a,b);
printf("Sum is :%d",s);
    return 0;
}
// funtion defination
int sum(int x, int y) {
    return x+y;
}
