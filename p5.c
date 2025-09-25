// swap two variables using third

#include <stdio.h>

int main(){

    float var1, var2, var3;

    printf("Enter first number var1 : ");
    scanf("%f", &var1);

    printf("Enter second number var2 : ");
    scanf("%f", &var2);

    var3=var1;
    var1=var2;
    var2=var3;

    printf("After swapping, \n");
    printf("var1 = %f\n", var1);
    printf("var2 = %f", var2);

    return 0;
}