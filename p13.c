// factorial of a number

#include <stdio.h>

int main(){

    double num, fact=1;

    printf("Enter the no. you want to know the factorial of : ");
    scanf("%lf", &num);

    for (int i=1; i<=num; i++)
        fact*=i;

    printf("The factorial of %.0lf is \n%.0lf", num, fact);

    return 0;
}