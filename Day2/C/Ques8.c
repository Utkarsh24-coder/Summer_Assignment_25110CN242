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
    if(no==rev){
        printf("%d is a palindrome number!",no);
    }
    else if(no!=rev){
        printf("%d is not a palindrome number!",no);
    }
    return 0;
}