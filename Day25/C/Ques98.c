#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    printf("Common characters in string are: ");

    for (int i = 0; str[i] != '\0'; i++){
        if(str[i]=='*'){
            continue;
        }
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
    }
        else{
            for(int j=i+1;str[j]!='\0';j++){
                if(str[i]==str[j]){
                    str[j]='*';
                    printf("%c ",str[i]);
                }
            }
        }
    }
    return 0;
    }