#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5, total;
    float percentage;
    char grade;

    printf("Enter marks of 5 subjects (out of 100):\n");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\n========== MARKSHEET ==========\n");
    printf("Subject 1 : %d\n", s1);
    printf("Subject 2 : %d\n", s2);
    printf("Subject 3 : %d\n", s3);
    printf("Subject 4 : %d\n", s4);
    printf("Subject 5 : %d\n", s5);

    printf("-------------------------------\n");
    printf("Total      : %d/500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    if (grade == 'F')
        printf("Result     : Fail\n");
    else
        printf("Result     : Pass\n");

    return 0;
}