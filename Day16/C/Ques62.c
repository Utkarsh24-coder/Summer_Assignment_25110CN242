#include<stdio.h>
int main(){
    int n,maxelement,maxfreq=0;
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
        int count=0;
        for (int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            maxelement=arr[i];
        }
    }
    printf("The maximum frequency element is %d with frequency %d.",maxelement,maxfreq);
    printf("\n");
    
    return 0;
}