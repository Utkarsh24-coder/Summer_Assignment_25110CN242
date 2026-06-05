//Strong Number
#include<stdio.h>
int main(){
    int n,num,a,temp=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    num = n;
    while(n>0){
        a=n%10;
        int fact=1;
        for(int i=1;i<=a;i++){
           fact =fact*i;
        }
    temp=temp+fact;
    n=n/10;
     }
     if(temp==num){
        printf("%d is a Strong Number",num);
     }
     else{
        printf("%d is a not a Strong Number",num);
     }
     return 0;

}