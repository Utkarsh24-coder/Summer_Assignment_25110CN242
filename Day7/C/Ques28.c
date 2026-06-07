#include <stdio.h>

int reverse = 0;

int ReverseNumber(int n)
{
    if (n == 0)
        return reverse;

    reverse = reverse * 10 + (n % 10);
    return ReverseNumber(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed number: %d\n", ReverseNumber(n));

    return 0;
}