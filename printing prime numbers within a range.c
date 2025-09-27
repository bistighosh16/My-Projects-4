#include <stdio.h>
void print_primes_in_range(int start, int end) {
    for (int num = start; num <= end; num++) {
        int is_prime = 1;
        if (num < 2) {
            is_prime = 0;
        }
        for (int i = 2; i <= num / 2 && is_prime; i++) {
            if (num % i == 0) {
                is_prime = 0;
            }
        }
        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");
}
int main() {
    int start, end;
    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    print_primes_in_range(start, end);
    return 0;
}
