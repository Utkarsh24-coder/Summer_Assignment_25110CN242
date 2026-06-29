#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count;

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

        if (count != 1) {
            printf("First repeating character: %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.");

    return 0;
}