#include<stdio.h>
int main(){
    int n;
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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for (int k=j;k<n;k++){
                    arr[k]=arr[k+1];
                    n--;
                }
            }
        }
    }
    printf("Array after removing dupicates: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}