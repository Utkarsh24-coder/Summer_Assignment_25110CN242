#include <stdio.h>

int main() {
    int arr1[50], arr2[50], arr3[100];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of first sorted array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of second sorted array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}