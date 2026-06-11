#include<stdio.h>
int main(){
    int l,sum=0,avg;
    printf("Enter length of array:");
    scanf("%d",&l);
    printf("\n");
    int arr[l],a;
    for(int i=0;i<l;i++){
        printf("Enter a array element:");
        scanf("%d",&a);
        arr[i]=a;
    }
    for(int j=0;j<l;j++){
        sum += arr[j];
    }
    printf("Sum and Average of elements of array is: %d  %d",sum,sum/l);
}