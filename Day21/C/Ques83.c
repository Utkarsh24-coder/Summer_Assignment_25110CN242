#include <stdio.h>
#include <string.h>
int main(){
    char str[100],Cvowel=0,Cconsonent=0;
    char vowel[]="AEIOUaeiou";
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    int a=strlen(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {

            if (strchr("AEIOUaeiou", str[i]) != NULL)
                Cvowel++;
            else
                Cconsonent++;
        }
    }
    printf("The count of vowels and Consonents are: \nVowels:%d \nConsonents:%d ",Cvowel,Cconsonent);
    return 0;

}