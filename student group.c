#include <stdio.h>
#define NUM_STUDENTS 10
#define NUM_GROUPS 10
int main() {
    int marks[NUM_STUDENTS];
    int frequency[NUM_GROUPS] = {0};
    int i, index;
    printf("Enter the marks of %d students (0-100):\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks. Please enter between 0 and 100.\n");
            i--;
        }
    }
    for (i = 0; i < NUM_STUDENTS; i++) {
        index = marks[i] / 10;
        if (index == 10) index = 9;
        frequency[index]++;
    }
    printf("\nMarks Range | Frequency\n");
    printf("----------------------\n");
    for (i = 0; i < NUM_GROUPS; i++) {
        printf("%2d - %3d  | %d\n", i * 10, (i + 1) * 10 - 1, frequency[i]);
    }
    return 0;
}
