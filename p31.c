// sum of main diagonal and anti diagonal elements of matrix

#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of square matrix (n x n) : ");
    scanf("%d", &n); int mat[n][n];
    printf("Enter the elements of the matrix :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("mat[%d][%d] = ", i+1, j+1);
            scanf("%d", &mat[i][j]);}}
    int main_diag_sum = 0, anti_diag_sum = 0;
    for (int i = 0; i < n; i++) {
        main_diag_sum += mat[i][i];
        anti_diag_sum += mat[i][n - 1 - i];}
    printf("Main diagonal sum : %d\n", main_diag_sum);
    printf("Anti-diagonal sum : %d", anti_diag_sum);
    return 0;
}