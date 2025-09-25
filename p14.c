// sum of even & odd nos. from 1 to N

#include <stdio.h>

int main(){

    int N, oddsum=0, evensum=0;

    printf("Enter the number upto which you want the sum of odd & even occurrences : ");
    scanf("%d", &N);

    for (int i=1; i<=N; i=i+2)
        oddsum+=i;

    printf("The sum of all odd nos. from 1 to %d is \n%d\n", N, oddsum);
    
    for (int i=2; i<=N; i=i+2)
        evensum+=i;

    printf("The sum of all even nos. from 1 to %d is \n%d", N, evensum);

    return 0;
}