#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i=2,largest=1;
    printf("Prime factors of number:");
    while(i<=n){
        while(n%i==0){
            printf(" %d ",i);
            largest=i;
            n=n/i;
        }
        i++;
    }
    printf("\nLargest Prime Factor is : %d",largest);
    return 0;
}