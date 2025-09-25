// factorial of a number

#include <stdio.h>

int main(){

    int n, fact=1;

    printf("Enter the no. you want to know the factorial of : ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
        fact*=i;

    printf("The factorial of %d is \n%d", n, fact);

    return 0;
}