#include <stdio.h>
#include <string.h>
int main(){
    char str[100],rev[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    int a=strlen(str);
    for (int i=0;i<a;i++){
        rev[i]=str[a-1-i];
    }
    rev[a]='\0';
    printf("String after reversing is: %s",rev);
    return 0;

}