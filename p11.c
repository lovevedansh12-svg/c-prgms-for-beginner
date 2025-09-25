// using switch statement for operations with two operands

#include <stdio.h>

int main(){

    char op; float num1, num2;

    printf("Type in your expression : \n");
    scanf("%f %c %f", &num1, &op, &num2);

    printf("The expression evaluates to\n");

    switch (op){

        case '+':
            printf("%f", num1+num2);
            break;

        case '-':
            printf("%f", num1-num2);
            break;

        case '*':
            printf("%.2f", num1*num2);
            break;

        case '/':
            if (num2!=0)
                printf("%.2f", num1/num2);
            else
                printf("DIVISION BY ZERO__ERROR");
            break;
    
    }
    return 0;
}