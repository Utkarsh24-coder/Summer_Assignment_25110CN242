//Perfect Number
#include<stdio.h>
int main(){
    int n,temp=0;
    printf("Enter a number:");
    scanf("%d",&n);
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
