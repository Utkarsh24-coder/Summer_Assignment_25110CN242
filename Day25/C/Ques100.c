#include <stdio.h>
#include <string.h>

int main() {
    char word[50][50], temp[50];
    int n;

    printf("Enter the number of words: ");
    scanf("%d", &n);

    getchar();

    printf("Enter the words:\n");
    for (int i = 0; i < n; i++) {
        fgets(word[i], sizeof(word[i]), stdin);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (strlen(word[i]) > strlen(word[j])) {

                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);

            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s", word[i]);
    }

    return 0;
}