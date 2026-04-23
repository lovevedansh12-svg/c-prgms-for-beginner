// aggregate marks

#include <stdio.h>

int main(){

    float max, sub1, sub2, sub3, sub4, sub5, sum, prcnt;
    
    printf("Enter maximum marks for each subject : ");
    scanf("%f", &max);

    printf("Enter marks obtained in 5 subjects : ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;

    prcnt = (sum*100)/(max*5);
    
    printf("Total marks obtained is %f \n", sum);
    printf("The percentage obtained is %f \n", prcnt);

    return 0;
}