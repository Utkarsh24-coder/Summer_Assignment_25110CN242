#include<stdio.h>
int main(){
    int u,l,prime;
    printf("Enter lower range:");
    scanf("%d",&l);
    printf("Enter upper range:");
    scanf("%d",&u);
    printf("Prime number in the range %d - %d :",l,u);
    for(int i=l;i<u;i++){
        for(int j=2;j<i;j++){
            if(i%j!=0){
                printf("%d  ",i);
                break;
            }
        }
    }
    return 0;

}