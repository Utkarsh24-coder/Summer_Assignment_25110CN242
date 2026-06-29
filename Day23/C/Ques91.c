#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    int found=0;
    printf("\nEnter first string:");
    fgets(str1,sizeof(str1),stdin);
    printf("\nEnter second string:");
    fgets(str2,sizeof(str2),stdin);
    if(strlen(str1) != strlen(str2)){
        printf("String is not a anagram string.");
    }
    else{
        for(int i=0;str1[i] != '\0';i++){
            int c1=0,c2=0;
            for(int j=0;str1[j] != '\0';j++){
                if(str1[i]==str1[j]){
                    c1 ++;
                }
                if(str1[i]==str2[j]){
                    c2 ++;
                }
            }
            if(c1 != c2){
                found =1;
                break;
            }

    }
    if(found ==1){
        printf("String is not a anagram string.");
    }
    else{
        printf("Stirng is a anagram string.");
    }

    }
    return 0;
}