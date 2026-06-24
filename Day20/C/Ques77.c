#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
    printf("Enter Dimensions of Matrix 1(row x column):");
    scanf("%d %d",&r1,&c1);
    int arr1[r1][c1];
    printf("Enter elements of array 1: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d %d: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter Dimensions of Matrix 2 (row x column):");
    scanf("%d %d",&r2,&c2);
    int arr2[r2][c2],arr[r1][c2];
    printf("Enter elements of array 2: \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d %d: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    if(c1 != r2){
        printf("Multiplication not possible:");
    }
    else{
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                arr[i][j]=0;
                for(int k=0;k<c1;k++){
                    arr[i][j]=arr1[i][k]*arr2[k][j];
            }
        }
        }
        
    }
    printf("Array after multiplication: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}