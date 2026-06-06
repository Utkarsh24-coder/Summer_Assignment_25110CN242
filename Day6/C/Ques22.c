#include <stdio.h>
#include <math.h>
int main()
{
    int bin, dec = 0, i = 0;
    printf("Enter a binary number:");
    scanf("%d", &bin);
    int b = bin;
    while (bin > 0)
    {
        int a = bin % 10;
        int t = a * pow(2, i);
        dec = dec + t;
        i++;
        bin = bin / 10;
    }
    printf("%d into Decimal: %d", b, dec);
    return 0;
}