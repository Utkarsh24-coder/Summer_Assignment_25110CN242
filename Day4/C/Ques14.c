#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf(" %d th fibonaaci series terms is %d",n,a);
    return 0;
    
}