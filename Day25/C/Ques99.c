#include <stdio.h>
#include <string.h>

int main() {
    char name[50][50], temp[50];
    int n;

    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar();
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        fgets(name[i], sizeof(name[i]), stdin);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s", name[i]);
    }

    return 0;
}