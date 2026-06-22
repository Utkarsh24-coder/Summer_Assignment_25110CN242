#include<stdio.h>

int main() {
    int n, search;

    printf("Enter length of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements in sorted order:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    //Assuming array to be sorted
    printf("Enter element to search: ");
    scanf("%d", &search);

    int low = 0, high = n - 1;
    int found = 0;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == search) {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(search > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}