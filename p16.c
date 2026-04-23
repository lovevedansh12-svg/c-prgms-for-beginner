// whether prime number or not

#include <stdio.h>

int main(){

    int num;

    printf("Enter the number to be checked : ");
    scanf("%d", &num);

    if (num<=1){
        printf("The number entered is not prime");
    }
    else{

        for (int i=2; i*i<=num; i++){

            if (num%i==0){
                printf("The number entered is not prime");
                return 0;
            }
        }

        printf("The number entered is prime");
    }
    return 0;
}