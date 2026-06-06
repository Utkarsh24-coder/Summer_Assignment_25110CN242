#include <stdio.h>
int main()
{
    int dec, bin[32], i = 0, count = 0;
    printf("Enter a Decimal no:");
    scanf("%d", &dec);
    int a = dec;
    while (dec > 0)
    {
        bin[i] = dec % 2;
        dec = dec / 2;
        i++;
    }
    printf("%d into Binary: ", a);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
        if (bin[j] == 1)
        {
            count++;
        }
    }
    printf("\nThe count of set bits in a number is: %d", count);
    return 0;
}