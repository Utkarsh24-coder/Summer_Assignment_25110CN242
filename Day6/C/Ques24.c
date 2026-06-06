#include <stdio.h>
int main()
{
    int num, pow, exp = 1;
    printf("Enter a number and power(num  pow) :");
    scanf("%d %d", &num, &pow);
    for (int i = pow; i > 0; i--)
    {
        exp = exp * num;
    }
    printf(" The value of %d^%d is %d", num, pow, exp);
    return 0;
}