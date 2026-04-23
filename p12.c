// sum of all natural nos. upto a given no.



#include <stdio.h>


int main(){

    int n, sum=0;

    printf("Enter the no. upto which you want the sum : ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
        sum+=i;
    
    printf("Required sum upto %d is \n%d", n, sum);

    return 0;
}