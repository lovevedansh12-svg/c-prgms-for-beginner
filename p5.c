// swap two variables using third

#include <stdio.h>

int main(){

    int var1, var2, temp;

    printf("Enter first number var1 : ");
    scanf("%d", &var1);

    printf("Enter second number var2 : ");
    scanf("%d", &var2);

    temp=var1;
    var1=var2;
    var2=temp;

    printf("After swapping, \n");
    printf("var1 = %d\n", var1);
    printf("var2 = %d", var2);

    return 0;
}