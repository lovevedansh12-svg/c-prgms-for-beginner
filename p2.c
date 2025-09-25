// simple & compound interest

#include<stdio.h>
#include<math.h>

int main (){

    float ci,si,prin,rate,time;

    printf("enter principal : ");
    scanf("%f" , &prin);

    printf("enter rate : ");
    scanf("%f" , &rate);

    printf("enter time : ");
    scanf("%f" , &time);

    si=prin*rate*time/100;

    ci=prin*pow((1+rate/100),time)-prin;

    printf("Simple interest is %f\n" , si);
    printf("Compound inerest is %f",ci);

    return 0;
}


