// sum of digits of entered number

#include <stdio.h>

int main(){

    int num, sum=0;

    printf("Enter the number to calculate the sum of digits of : ");
    scanf("%d", &num);

    while (num!=0){
        sum = sum + num%10;
        num = num/10;
    }

    printf("The sum of digits of given number is\n %d", sum);
}