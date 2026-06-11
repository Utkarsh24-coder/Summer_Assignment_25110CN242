#include<stdio.h>
int main(){
    int n,count=0,temp,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=n,b=n;
    while(n>0){
        count+=1;
        n=n/10;
    }
    while(a>0){
        temp=(a%10);
        int t=1;
        for(int i=0;i<count;i++){
            t=t*temp;
        }
        sum=sum+t;
        a=a/10;
    }
    if(sum==b){
        printf("%d is an armstrong number",b);
    }
    else{
        printf("%d is not a armstrong number",b);
    }
    return 0;
}