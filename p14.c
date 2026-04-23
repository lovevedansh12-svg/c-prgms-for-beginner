// sum of even & odd nos. from 1 to N

#include <stdio.h>

int main(){

    int num, evensum=0, oddsum=0;

    printf("Enter the number upto which you want the sum of odd & even occurrences : ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++){
        if (i%2==0)
            evensum+=i;
        else
            oddsum+=i;}

    printf("The sum of all even nos. from 1 to %d is %d\n", num, evensum);
    printf("The sum of all odd nos. from 1 to %d is %d", num, oddsum);

    return 0;
}