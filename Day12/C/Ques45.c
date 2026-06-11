#include<stdio.h>
int Palindrome(int a){
    int b=a;
    int rev=0;
    while (b>0){
        rev=rev * 10 +(b%10);
        b=b/10;
    }
    if(rev==a){
            printf("%d is a Palindrome Number.",a);
        }
        else {
            printf("%d is not a Palindrome Number.",a);
        }
}
int main(){
    int n1;
    printf("Enter a number:");
    scanf("%d",&n1);
    Palindrome(n1);
    return 0;
}