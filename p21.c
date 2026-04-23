// pascal's triangle pattern

#include <stdio.h>

int main() {

    int rows, val;
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for (int n=0; n<rows; n++) {
        for (int spc=n; spc<rows-1; spc++)
            printf(" ");

        val=1;
        for (int r=0; r<=n; r++) {
            printf("%d ", val);
            val=val*(n-r)/(r+1);
        }
        printf("\n");
    }
    return 0;
}