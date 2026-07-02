#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    do {
        printf("\n===== STRING MENU =====\n");
        printf("1. String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Length of First String = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 4:
                if(strcmp(str1, str2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Different\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}