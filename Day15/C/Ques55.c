#include <stdio.h>
int main()
{
    int a, larg, sec_larg;
    printf("Enter length of array:");
    scanf("%d", &a);
    int arr[a];
    printf("------------------------------------- \n");
    for (int i = 0; i < a; i++)
    {
        printf("Enter array element:");
        scanf("%d", &arr[i]);
    }
    printf("------------------------------------- \n");
    larg = arr[0];
    sec_larg = -99999;
    for (int j = 1; j < a; j++)
    {
        if (arr[j] > larg)
        {
            larg = arr[j];
        }
    }
    for (int k = 0; k < a; k++)
    {
        if (arr[k] > sec_larg && arr[k] != larg)
        {
            sec_larg = arr[k];
        }
    }
    printf("Second largest element in array is %d.", sec_larg);
    return 0;
}