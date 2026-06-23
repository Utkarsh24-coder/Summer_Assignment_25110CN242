#include<stdio.h>
int main(){
    int a,sum=0;
    printf("Enter the length of array:");
    scanf("%d",&a);
    // Supposing a Matrix to be a x a (Square Matrix)
    int arr[a][a],tra[a][a];
    printf("Enter matrix elements:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("%d x %d =",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if (i==j){
                sum += arr[i][j];
            }
            else if(j=a-1-i){
                sum += arr[i][j];
            }
        }
    }
    printf("Sum of diagonals of Matrix: %d",sum);
    
    return 0;

}