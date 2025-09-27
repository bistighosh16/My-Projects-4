#include <stdio.h>
int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("Numbers from 1 to %d excluding prime numbers:\n", limit);
    for (int i = 1; i <= limit; i++) {
        int is_prime = 1;
        if (i > 1) {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        } else {
            is_prime = 0;
        }
        if (!is_prime) {
            printf("%d\n", i);
        }
    }
    return 0;
}
