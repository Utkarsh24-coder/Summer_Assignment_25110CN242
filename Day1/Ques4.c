#include<stdio.h>
int main()
{
    int no,count=0,a;
    printf("Enter a number:");
    scanf("%d",&no);
    a=no;
    while (no>0){
        count++;
        no=no/10;
    }
    printf("The count of digits of %d is %d",a,count);
    return 0;
}