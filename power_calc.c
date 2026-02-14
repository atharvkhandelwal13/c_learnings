#include<stdio.h>
#include<math.h>

int main(){
    double x, n, result;

    printf("Enter the value of base(x): ");
    scanf("%lf", &x);

    printf("Enter the valur of power(n) on the base: ");
    scanf("%lf", &n);

    result = pow(x, n);
    //%.2lf limits the output to 2 decimal places so it looks clean

    return 0;
    printf("%.2lf raised to the power %.2lf gives %.2lf", x, n, result);
}
