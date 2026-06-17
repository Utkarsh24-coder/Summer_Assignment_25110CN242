#include <stdio.h>

int main()
{
    int n;

    printf("Enter length of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter array element: ");
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}