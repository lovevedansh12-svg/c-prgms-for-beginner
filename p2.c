// simple & compound interest

#include <stdio.h>
#include <math.h>

int main()
{

    float prin, rate, time, SI, CI;

    printf("enter principal : ");
    scanf("%f", &prin);

    printf("enter rate of interest : ");
    scanf("%f", &rate);

    printf("enter time (in years) : ");
    scanf("%f", &time);

    SI = prin * rate * time / 100;

    CI = prin * pow((1 + rate / 100), time) - prin;

    printf("Simple interest is %f\n", SI);
    printf("Compound interest is %f", CI);

    return 0;
}
