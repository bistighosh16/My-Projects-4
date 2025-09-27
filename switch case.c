#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int choice;
    printf("Press 1 to print prime numbers\n");
    printf("Press 2 to print non-prime numbers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Prime numbers:\n");
        for (int num = 1; num <= 100; num++) {
            if (isPrime(num)) {
                printf("%d ", num);
            }
        }
    } else if (choice == 2) {
        printf("Non-prime numbers:\n");
        for (int num = 2; num <= 100; num++) {
            if (!isPrime(num)) {
                printf("%d ", num);
            }
        }
    } else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }
    printf("\n");
    return 0;
}

