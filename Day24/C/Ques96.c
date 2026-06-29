#include <stdio.h>

int main()
{
    char str[100],str1[100];
    int temp=0;

    printf("Enter a Sentence: ");
    fgets(str, sizeof(str), stdin);

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
                }
            }
        }
        str1[temp]=str[i];
        temp++;
    }
    str1[temp]='\0';
    printf("String after removing duplicates is: %s",str1);
    return 0;
    }