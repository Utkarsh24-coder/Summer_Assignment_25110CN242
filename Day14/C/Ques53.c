#include <stdio.h>
int main()
{
    int element, a;
    printf("Enter length of array:");
    scanf("%d", &a);
    printf("------------------------------------- \n");
    int arr[a], is_found = 1;
    for (int i = 0; i < a; i++)
    {
        printf("Enter array element:");
        scanf("%d", &arr[i]);
    }
    printf("------------------------------------- \n");
    printf("Enter element to be searched:");
    scanf("%d", &element);
    for (int j = 0; j < a; j++)
    {
        if (arr[j] == element)
        {
            printf("Element found at position %d.", j + 1);
            is_found = 0;
        }
    }
    if (is_found)
    {
        printf("Element not found!!");
    }
    return 0;
}