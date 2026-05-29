#include<stdio.h>
int main()
{
    int a,fact=1;
    printf("Enter a number:");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        fact*=i;
    }
    printf("Factorial of %d is %d",a,fact);
    return 0;
}