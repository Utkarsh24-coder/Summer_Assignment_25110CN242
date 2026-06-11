#include<stdio.h>
//Function Definition
int Factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact *i;
    }
    return fact;
}
int main(){
    int n1;
    printf("Enter a number:");
    scanf("%d",&n1);
    printf("Factorial of %d is: %d",n1,Factorial(n1));
    return 0;
}