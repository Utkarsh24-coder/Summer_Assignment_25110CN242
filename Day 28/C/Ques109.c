#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &book[i].id);

        printf("Enter Book Title: ");
        scanf("%s", book[i].title);

        printf("Enter Author Name: ");
        scanf("%s", book[i].author);
    }

    printf("\n===== Library Records =====\n");

    for(i = 0; i < n; i++) {
        printf("\nBook ID : %d", book[i].id);
        printf("\nTitle   : %s", book[i].title);
        printf("\nAuthor  : %s\n", book[i].author);
    }

    return 0;
}