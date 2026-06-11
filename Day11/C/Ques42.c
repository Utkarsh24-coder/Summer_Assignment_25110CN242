#include<stdio.h>
//Function Definition
int Max(int a,int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int n1,n2;
    printf("Enter two numbers (n1 n2):");
    scanf("%d %d",&n1,&n2);
    printf("Maximum of two numbers is: %d",Max(n1,n2));
    return 0;
}