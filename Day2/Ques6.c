#include<stdio.h>
int main(){
    int a,rev=0;
    printf("Enter a number:");
    scanf("%d",&a);
    int no=a;
    while (a>0){
        rev=(rev*10)+(a%10);
        a=a/10;
    }
    printf("Reverse of %d is %d",no,rev);
    return 0;
}