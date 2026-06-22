#include<stdio.h>
int main(){
    int n1,n2,temp=0;
    printf("Enter length of Array 1 and Array 2: ");
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2],arr[n1+n2];
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
        arr[i]=arr1[i];
    }
    for(int j=0;j<n2;j++){
        int found=0;
        for(int i=0;i<n1;i++){
            if(arr2[j]==arr1[i]){
                found=1;
            }
        }
        if(found==0){
            arr[n1+temp]=arr2[j];
            temp ++;
        }
        
    }
    printf("Array after union: \n");
    for(int i=0;i<n1+temp;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}