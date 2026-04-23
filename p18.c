// reverse of a number

#include <stdio.h>

int main(){

    int num, rvrs=0;

    printf("Enter the number to reverse : ");
    scanf("%d", &num);

    while(num){
        rvrs=rvrs*10+num%10;
        num/=10;
    }
    printf("The reverse of the number is %d", rvrs);

    return 0;
}