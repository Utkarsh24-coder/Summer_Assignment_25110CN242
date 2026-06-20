#include<stdio.h>
int main(){
    int n,a;
    printf("Enter length of Array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array elements: \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int j=0;j<n/2;j++){
        a=arr[n-1-j];
        arr[n-1-j]=arr[j];
        arr[j]=a;
    }
    printf("Array after reversing:");
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    return 0;
}