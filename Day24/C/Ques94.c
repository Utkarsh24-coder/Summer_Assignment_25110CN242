#include <stdio.h>

int main() {
    char str[100], result[100];
    int temp = 0;

    printf("Enter a String: ");
    scanf("%s",str);

    for (int i = 0; str[i] != '\0'; i++) {
        int count = 1;

        if (str[i] == '*')  
            continue;

        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '*';   
            }
        }

        result[temp++] = str[i];
        result[temp++] = count + '0';
    }

    result[temp] = '\0';

    printf("Compressed String: %s\n", result);

    return 0;
}