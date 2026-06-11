#include<stdio.h>
int main(){
    int a;
   int count=0;
    printf("Enter a Number:");
    scanf("%d",&a);
    int no=a;
    for(int i=1;i<a;i++){
        if(a%i==0){
            count ++;
        }
    }
    if(count>1){
        printf("%d is not a prime number.",no);
    }
    else{
        printf("%d is a prime number.",no);
    }
    return 0;
}