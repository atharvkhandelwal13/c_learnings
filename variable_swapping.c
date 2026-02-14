#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the value for a and b:");
    scanf("%d %d", &a, &b);
    printf("your enter value of a is: %d \n",a);
    printf("your enter value of b is: %d \n",b);

    c = a;
    a = b;
    b = c;
    printf("Swapped value of a is: %d \n", a);
    printf("Swapped value of b is: %d \n", b);
    return 0;
}
