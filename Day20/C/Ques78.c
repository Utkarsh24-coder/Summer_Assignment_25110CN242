#include<stdio.h>
int main(){
    int n;
    printf("Enter the length of array :");
    scanf("%d ",&n);
    //Supposing matrix is a Square matrix.
    int arr[n][n];
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d - %d :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int is_symmetric=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] != arr[j][i]){
                is_symmetric ++;
            }
        }
    }
    if(is_symmetric==0){
        printf("Given matrix is a symmetric matrix.");
    }
    else{
        printf("Given matrix is a non-symmetric matrix.");
    }
    return 0;
}

