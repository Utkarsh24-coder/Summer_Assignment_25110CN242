#include <stdio.h>
// Function Definition
int Sum(int a, int b)
{
    int s = a + b;
    return s;
}
int main()
{
    int n1, n2;
    printf("Enter two numbers (n1 n2):");
    scanf("%d %d", &n1, &n2);
    printf("Sum of two numbers is: %d", Sum(n1, n2));
    return 0;
}