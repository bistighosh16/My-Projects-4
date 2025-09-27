#include <stdio.h>
int main() {
    float investment, rate;
    int years;
    printf("Enter the initial investment amount: ");
    scanf("%f", &investment);
    printf("Enter the rate of investment (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the number of years: ");
    scanf("%d", &years);
    rate = rate / 100;
    for (int i = 1; i <= years; i++) {
        investment = investment + (investment * rate);
    }
    printf("The amount after %d years will be: %.2f\n", years, investment);

    return 0;
}

