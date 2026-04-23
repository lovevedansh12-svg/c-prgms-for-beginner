// area & circumference of a circle

#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

int main (){

    float radius, area, circum;

    printf("Enter radius of the circle : ");
    scanf("%f", &radius);

    area = M_PI*radius*radius;
    circum = 2*M_PI*radius;

    printf("Area of the circle is %f sq. units\n", area);
    printf("Circumference of the circle is %f units", circum);

    return 0;

}