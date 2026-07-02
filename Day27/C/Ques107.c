#include <stdio.h>

int main() {

    float basic, hra, da, pf, netSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    printf("Enter DA: ");
    scanf("%f", &da);

    printf("Enter PF: ");
    scanf("%f", &pf);

    netSalary = basic + hra + da - pf;

    printf("\n===== Salary Details =====\n");
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("PF           : %.2f\n", pf);
    printf("Net Salary   : %.2f\n", netSalary);

    return 0;
}