#include <stdio.h>
int main() {
    int x;
    int *ptr;
    int **ptr1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    ptr = &x;
    ptr1 = &ptr;
    printf("The value of x using **ptr1 is: %d\n", **ptr1);
    return 0;
}
