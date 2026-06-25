#include <stdio.h>
int main(){
    char str[100];
    int len=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while(str[len] !='\0' && str[len] !='\n'){
        len++;
    }
    printf("The length of Array is %d",len);
    return 0;
}