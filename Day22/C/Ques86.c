#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int count=0;
    // Assuming sentences to be simple sentences...
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int a=strlen(str);
    for(int i=0;i<a;i++){
        if(str[i]==' '){
            count ++;
        }
    }
    count ++;//One for last word
    printf("Count of Words in a sentence is : %d",count);
    
    return 0;
}