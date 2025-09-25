// whether leap year or not

#include <stdio.h>

int main(){

    unsigned int year;

    printf("Enter the year : ");
    scanf("%d", year);

    if ((year%4==0 && year%100!=0) || (year%400==0))
        printf("The year entered is a leap year");

    else
        printf("The year entered is not a leap year");
    
    return 0;
}