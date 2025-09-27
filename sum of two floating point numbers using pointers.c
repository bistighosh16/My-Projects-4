// Write a program to add two floating point numbers//
#include <stdio.h>
int main() {
    float num1, num2, sum;
    float *pnum1 = &num1, *pnum2 = &num2;
    printf("Enter the first number: ");
    scanf("%f", pnum1);
    printf("Enter the second number: ");
    scanf("%f", pnum2);
    sum = *pnum1 + *pnum2;
    printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, sum);
    return 0;
}
