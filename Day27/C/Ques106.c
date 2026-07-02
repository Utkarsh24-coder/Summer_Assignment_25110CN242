#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Department: ");
        scanf("%s", emp[i].department);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n===== Employee Records =====\n");

    for(i = 0; i < n; i++) {

        printf("\nEmployee ID : %d", emp[i].id);
        printf("\nName        : %s", emp[i].name);
        printf("\nDepartment  : %s", emp[i].department);
        printf("\nSalary      : %.2f\n", emp[i].salary);
    }

    return 0;
}