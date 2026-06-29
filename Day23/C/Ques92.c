#include <stdio.h>
#include <string.h>

int main() {
    char str[100],ch;
    int i, j, count,max=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            continue;

        count = 0;

        for (j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j])
                count++;
        }
        if(count > max){
            max ==count;
            ch=str[i];
        }
    }

    printf("The maximum repeating Character is %s",ch);

    return 0;
}