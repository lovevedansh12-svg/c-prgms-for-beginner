// addition and multiplication of matrices of order nxn

#include <stdio.h>

int main(){

    int n;

    printf("Enter order of matrices A and B: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], sum[n][n], product[n][n];
    
    printf("\nEnter the elements of matrix A below : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Enter a(%d,%d) : ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the elements of matrix B below : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Enter b(%d,%d) : ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            sum[i][j]=a[i][j]+b[i][j];
            product[i][j]=0;
            for (int m=0; m<n; m++)
                product[i][j]+=a[i][m]*b[m][j];
        }
    }
    printf("\nThe addition of matrices A and B evaluates to :\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    printf("\nThe multiplication of matrices A and B evaluates to :\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    return 0;
}