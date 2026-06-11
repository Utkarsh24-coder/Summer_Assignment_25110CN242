#include<stdio.h>
int Fibonaaci(int n){
    int a=0,b=1,c;
    printf("fibonaaci series upto %d terms:",n);
    for(int i=0;i<n;i++){
        printf(" %d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    int n1;
    printf("Enter number of terms:");
    scanf("%d",&n1);
    Fibonaaci(n1);
    return 0;
}