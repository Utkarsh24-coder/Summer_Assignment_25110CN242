#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        sum+=i;
    }
    printf("Sum of first %d natural no is:%d",a,sum);
    return 0;
}