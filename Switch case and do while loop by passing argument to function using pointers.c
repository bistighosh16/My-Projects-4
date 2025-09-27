#include <stdio.h>
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i + 1, *(arr + i));
    }
}
void printArrayReverse(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("Element %d: %d\n", i + 1, *(arr + i));
    }
}
int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}
int subtractArray(int *arr, int size) {
    int result = arr[0];
    for (int i = 1; i < size; i++) {
        result -= *(arr + i);
    }
    return result;
}
void findMaxMin(int *arr, int size) {
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}
int main() {
    int n, choice, continueChoice;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    do {
        printf("\nChoose an option:\n");
        printf("1. Print array\n");
        printf("2. Print array in reverse\n");
        printf("3. Sum the elements of the array\n");
        printf("4. Subtract the elements of the array\n");
        printf("5. Find the maximum and minimum elements\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nThe array elements are:\n");
                printArray(arr, n);
                break;
            case 2:
                printf("\nThe array elements in reverse order are:\n");
                printArrayReverse(arr, n);
                break;
            case 3:
                printf("\nThe sum of the array elements is: %d\n", sumArray(arr, n));
                break;
            case 4:
                printf("\nThe result of subtracting the array elements is: %d\n", subtractArray(arr, n));
                break;
            case 5:
                printf("\nThe maximum and minimum elements are:\n");
                findMaxMin(arr, n);
                break;
            default:
                printf("\nInvalid choice! Please choose a valid option.\n");
        }
        printf("\nDo you want to continue? Press 1 for Yes, 2 for No: ");
        scanf("%d", &continueChoice);
    } while (continueChoice == 1);
    printf("\nThank you for using the program!\n");
    return 0;
}
