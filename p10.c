// student's percentage and grade

#include <stdio.h>

int main(){

    float max, marks[5], sum=0, prcnt;
    
    printf("Enter maximum marks for each subject : ");
    scanf("%f", &max);
    
    for (int i=0; i<5; i++){
        printf("Enter marks of subject %d : ", i+1);
        scanf("%f", &marks[i]);
        sum+=marks[i];
    }
    prcnt=(float)(sum*100)/(max*5);

    printf("The percentage obtained is %f \n", prcnt);
    printf("Student's grade is ");

    if (prcnt>=90)
        printf("'A'");

    else if (prcnt>=80)
        printf("'B'");

    else if (prcnt>=60)
        printf("'C'");

    else if (prcnt<=60)
        printf("'D'");
    
    return 0;
}