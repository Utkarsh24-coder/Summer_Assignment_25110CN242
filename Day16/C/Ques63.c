#include<stdio.h>
int main(){
    int n,sum;
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
    printf("Enter the value of sum:");
    scanf("%d",&sum);
    printf("\n");
    printf("The pair with given sum %d is:\n",sum);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d + %d = %d \n",arr[i],arr[j],sum);
            }
        }
    }
    printf("\n");
    
    return 0;
}