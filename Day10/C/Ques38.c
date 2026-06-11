#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        printf("\n");
        for(int j=0;j<9;j++){
            if(j<i || j>(8-i)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
    }
    return 0;
}