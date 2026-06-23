#include<stdio.h>
int main(){
    int row,column;
    printf("Enter Dimensions of Matrices (row x column):");
    scanf("%d %d",&row,&column);
    int arr1[row][column],arr2[row][column],arr[row][column];
    printf("Enter elements of array 1: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d %d: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter elements of array 2: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d %d: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            arr[i][j]=arr1[i][j] - arr2[i][j];
        }
    }
    printf("Matrix after subtraction: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}