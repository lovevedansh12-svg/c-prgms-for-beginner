// centigrade to fahrenheit

#include <stdio.h>

int main(){

    float cent, fahr;

    printf("Enter temperature in degree Centigrade : ");
    scanf("%f", &cent);

    fahr = ((9*cent)/5) + 32;

    printf("The temperature in degree Fahrenheit is %.2f", fahr);

    return 0;
}