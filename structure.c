#include <stdio.h>
#include <conio.h>
struct Employee {
    char emp_name[50];
    int emp_id;
    char DOB[20];
    float salary;
};
int main() {
    struct Employee emp1;
    printf("\n Enter the name of the employee: ");
    scanf("%s", emp1.emp_name);
    printf("\n Enter the ID of the employee: ");
    scanf("%d", &emp1.emp_id);
    printf("\n Enter the DOB of the employee: ");
    scanf("%s", emp1.DOB);
    printf("\n Enter the salary of the employee: ");
    scanf("%f", &emp1.salary);
    printf("\n ***** EMPLOYEE DETAILS *****");
    printf("\n NAME: %s", emp1.emp_name);
    printf("\n EMP_ID: %d", emp1.emp_id);
    printf("\n DOB: %s", emp1.DOB);
    printf("\n SALARY: %.2f", emp1.salary);
    getch();
    return 0;
}
