#include<stdio.h>
int Perfect(int n){
    int temp=0;
    int a=n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            temp=temp+i;
        }
    }
    if(temp==a){
        printf("%d is a Perfect Number",a);
    }
    else{
        printf("%d is a not a Perfect Number",a);
    }
}
int main(){
    int n1;
    printf("Enter a number:");
    scanf("%d",&n1);
    Perfect(n1);
    return 0;
}