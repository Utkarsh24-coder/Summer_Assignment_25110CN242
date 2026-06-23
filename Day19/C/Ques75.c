#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the length of array-(row x column):");
    scanf("%d %d",&a,&b);
    int arr[a][b],tra[a][b];
    printf("Enter matrix elements:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d x %d =",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            tra[i][j]=arr[j][i];
        }
    }
    printf("Matrix after Transpose:\n");
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%d  ",tra[i][j]);
        }
        printf("\n");
    }
    return 0;

}