#include <stdio.h>

int main()
{
    int l, u;

    printf("Enter range (lower upper): ");
    scanf("%d %d", &l, &u);

    for(int n = l; n <= u; n++)
    {
        int count = 0, sum = 0;
        int a = n, b = n;

        int temp_num = n;
        while(temp_num > 0)
        {
            count++;
            temp_num /= 10;
        }

        while(a > 0)
        {
            int digit = a % 10;

            int power = 1;
            for(int i = 0; i < count; i++)
            {
                power *= digit;
            }

            sum += power;
            a /= 10;
        }

        if(sum == b)
        {
            printf("%d ", b);
        }
    }

    return 0;
}