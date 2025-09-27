#include <stdio.h>
int main() {
    float futureVal, ROI;
    int years;
    printf("Enter the initial investment amount: ");
    scanf("%f", &futureVal);
    printf("Enter the rate of investment (in percentage): ");
    scanf("%f", &ROI);
    printf("Enter the number of years: ");
    scanf("%d", &years);sunflo
    for (int i = 1; i <= years; i++) {
        futureVal = futureVal * (1 + ROI / 100);
        printf("Year %d: Investment Value = %.2f\n", i, futureVal);
    }
    return 0;
}
