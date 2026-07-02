#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;
    int n, i;

    // Open file for writing
    fp = fopen("employee.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details and write to file
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e.id);

        printf("Enter Name: ");
        scanf("%s", e.name);

        printf("Enter Salary: ");
        scanf("%f", &e.salary);

        fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
    }

    fclose(fp);

    printf("\nEmployee records saved successfully!\n");

    // Open file for reading
    fp = fopen("employee.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("\nEmployee Records:\n");
    printf("------------------------------\n");

    while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
        printf("ID     : %d\n", e.id);
        printf("Name   : %s\n", e.name);
        printf("Salary : %.2f\n\n", e.salary);
    }

    fclose(fp);

    return 0;
}