// student's percentage and grade

#include <stdio.h>

int main(){

    float max, sub1, sub2, sub3, sub4, sub5, sum, prcnt;
    
    printf("Enter maximum marks for each subject : ");
    scanf("%f", &max);

    printf("Enter marks obtained in 5 subjects : ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;

    prcnt = (sum*100)/(max*5);

    printf("The percentage obtained is %f \n", prcnt);
    printf("Student's grade is ");

    if (prcnt>=90) printf("'A'");

    else if (prcnt>=80) printf("'B'");

    else if (prcnt>=60) printf("'C'");

    else printf("'D'");
    
    return 0;



}
