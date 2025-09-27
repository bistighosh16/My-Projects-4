#include <stdio.h>
int calculate_tax(int water_consumed) {
    if (water_consumed <= 45) {
        return 0;
    } else if (water_consumed <= 75) {
        return 475;
    } else if (water_consumed < 125) {
        return 750;
    } else if (water_consumed < 200) {
        return 1225;
    } else if (water_consumed < 350) {
        return 1650;
    } else {
        return 2000;
    }
}
int main() {
    int water_consumed;
    printf("Enter the water consumption in gallons: ");
    scanf("%d", &water_consumed);
    int tax = calculate_tax(water_consumed);
    printf("The annual water conservation tax for %d gallons is: %d rupees\n", water_consumed, tax);

    return 0;
}
