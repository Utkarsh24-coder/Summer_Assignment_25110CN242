#include <stdio.h>
#include <string.h>
int main(){

    char str[100],ch;
    int count=0;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    printf("Enter a character to find frequency:");
    scanf(" %c",&ch);
    for(int i=0;str[i] !='\0';i++){
        if(str[i]==ch){
            count ++;
        }
    }
    printf("The frequency of %c is %d",ch,count);

    return 0;
}