#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the length of array (row x column):");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter array elements: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d - %d :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        int col_sum = 0;
        for (int j = 0; j < c; j++)
        {
            col_sum += arr[j][i];
        }
        printf("Sum of %dth column : %d \n", i + 1, col_sum);
    }
    return 0;
}
