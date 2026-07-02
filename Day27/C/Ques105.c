#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n===== Student Records =====\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll Number : %d", s[i].roll);
        printf("\nName        : %s", s[i].name);
        printf("\nMarks       : %.2f\n", s[i].marks);
    }

    return 0;
}