#include <stdio.h>

int main()
{
    int n, element, count = 0;

    printf("Enter length of array: ");
    scanf("%d", &n);
    printf("------------------------------------- \n");

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter array element: ");
        scanf("%d", &arr[i]);
    }
    printf("------------------------------------- \n");

    printf("Enter element whose frequency is to be found: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", element, count);

    return 0;
}