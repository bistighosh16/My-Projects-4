#include <stdio.h>

// Function prototype (declare only once)
int sum(int a, int b);

int main()
{
    int num1, num2, total = 0;

    printf("\n Enter the first number: ");
    scanf("%d", &num1);

    printf("\n Enter the second number: ");
    scanf("%d", &num2);

    // Call sum once, or multiple times if needed (not necessary here)
    total = sum(num1, num2);

    printf("\n total = %d\n", total);
    return 0;
}

// Function definition (only one)
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
