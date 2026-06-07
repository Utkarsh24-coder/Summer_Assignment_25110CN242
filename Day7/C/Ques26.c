#include <stdio.h>
void fibonaaci(int n)
{
    int i = 0,a = 0, b = 1;
     while (i < n)
    {
        printf(" %d ", a);
        int c = a + b;
        a = b;
        b = c;
        i++;
    }
}
int main(){
    int n;
    printf("Enter Number Of Terms:");
    scanf("%d",&n);
    printf("Fibonaaci Series upo %d terms is: ",n);
    fibonaaci(n);
    return 0;
}