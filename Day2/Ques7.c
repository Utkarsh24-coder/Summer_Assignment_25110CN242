#include<stdio.h>
int main()
{
    int a,mul=1;
    printf("Enter a number:");
    scanf("%d",&a);
    int no=a;
    while(a>0){
        mul=mul*(a%10);
        a=a/10;
    }
    printf("Product of digits of %d is %d",no,mul);
    return 0;
}