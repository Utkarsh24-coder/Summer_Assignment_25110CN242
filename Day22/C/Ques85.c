#include <stdio.h>
#include <string.h>
int main(){
    char str[100],rev[100];
    printf("Enter a string:");
    scanf("%s",&str);
    int a=strlen(str);
    for(int i=0;i <a;i++){
        rev [a-1-i]=str[i];
    }
    rev[a]='\0';
    if(strcmp(str,rev) ==0){
        printf("String is a palindrome.");
    }
    else{
        printf("String is not a palindrome.");
    }
    return 0;
}