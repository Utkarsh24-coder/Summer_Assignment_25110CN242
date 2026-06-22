#include<stdio.h>
int main(){
    int n1,n2,temp=0;
    printf("Enter length of Array 1 and Array 2: ");
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2],arr[n1];
    printf("Enter Array 1 elements: \n");
    for (int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter Array 2 elements: \n");
    for (int j=0;j<n2;j++){
        scanf("%d",&arr2[j]);
    }
    printf("\n");
    for(int i=0;i<n1;i++){
        int found=0;
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                found=1;
                break;
            }
        }
        if(found==1){
            arr[temp]=arr1[i];
            temp ++;
        }
    }
    printf("Array after intersection: \n");
    for(int i=0;i<temp;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}