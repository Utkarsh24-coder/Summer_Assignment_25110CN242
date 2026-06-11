#include <stdio.h>
// Function Definition
int Prime(int a)
{
    int isprime = 0;
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                isprime++;
            }
        }
        return isprime;
    }
}
int main()
{
    int n1, a;
    printf("Enter a number:");
    scanf("%d", &n1);
    a = Prime(n1);
    if (a == 0)
    {
        printf("%d is a Prime Number", n1);
    }
    else
    {
        printf("%d is not a Prime Number", n1);
    }
    return 0;
}