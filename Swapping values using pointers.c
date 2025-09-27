#include <stdio.h>
int main() {
    int x, y, temp;
    int *ptrX, *ptrY;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    ptrX = &x;
    ptrY = &y;
    printf("\nBefore swapping: x = %d, y = %d\n", x, y);
    temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
