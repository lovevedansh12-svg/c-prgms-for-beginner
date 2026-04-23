// using switch statement for operations with two operands

#include <stdio.h>
int main(){
    char operator; float num1, num2;
    printf("Type in your expression : ");
    scanf("%f %c %f", &num1, &operator, &num2);
    printf("The expression evaluates to \n");
    switch (operator){
        case '+': printf("%f", num1+num2); break;
        case '-': printf("%f", num1-num2); break;
        case '*': printf("%f", num1*num2); break;
        case '/':
            if (num2!=0) printf("%f", num1/num2);
            else printf("DIVISION BY ZERO__ERROR");
            break;
        default: printf("INVALID OPERATOR");}
    return 0;}