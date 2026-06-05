#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i=2;
    printf("Prime factors of number:");
    while(i<=n){
        while(n%i==0){
            printf(" %d ",i);
            n=n/i;
        }
        i++;
    }
    return 0;
}