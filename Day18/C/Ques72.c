#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter length of Array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
        
    }
    printf("Array after descending bubble sort :");
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}