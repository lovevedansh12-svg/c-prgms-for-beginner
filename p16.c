// whether prime number or not

#include <stdio.h>

int main(){

    int num, result=0;

    printf("Enter the number to be checked : ");
    scanf("%d", &num);

    if (num<2)
        printf("number should be greater than or equal to 2");
    
    else{

        for (int i=2; i<num; i++){

            if (num%i==0)
                {result=1;
                break;}
    }

        if (result==1)
            printf("The number entered is not prime");
        else
            printf("The number entered is prime");
    }
    return 0;
}