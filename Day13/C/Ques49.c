#include<stdio.h>
int main(){
    int l;
    printf("Enter length of array:");
    scanf("%d",&l);
    printf("\n");
    int arr[l],a;
    for(int i=0;i<l;i++){
        printf("Enter a array element:");
        scanf("%d",&a);
        arr[i]=a;
    }
    printf("Elements of Array:");
    for(int j=0;j<l;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}