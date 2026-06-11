#include<stdio.h>
int main(){
    int l,even=0,odd=0;
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
        if (arr[j]%2==0){
            even ++;
        } 
        else{
            odd ++;
        }   
    }
    printf("The count of even and odd array elements: \nEven:%d\nOdd:%d",even,odd);
    return 0;
}