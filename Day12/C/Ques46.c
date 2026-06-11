#include<stdio.h>
int Armstrong(int n){
    int count=0,temp,sum=0;
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
}
int main(){
    int n1;
    printf("Enter a number:");
    scanf("%d",&n1);
    Armstrong(n1);
    return 0;
}