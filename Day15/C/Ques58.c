#include<stdio.h>
int main(){
    int n;
    printf("Enter length of Array:");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter Array elements: \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int j=0;j<n;j++){
        if(j==0){
            arr[n]=arr[0];
        }
        else{
            arr[j-1]=arr[j];
        }
    }
    arr[n-1]=arr[n];
    printf("Array after rotating left:");
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    return 0;
}