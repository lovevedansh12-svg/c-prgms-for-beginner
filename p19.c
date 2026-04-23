// armstrong nos./narcissistic no. from 1 to 100

#include <stdio.h>
#include <math.h>
int main(){    
    int result, count, num, temp;
    printf("Armstrong numbers between 1 and 5000 :\n");
    for (num=1; num<=5000; num++){        
        temp=num;
        count=0;
        while(temp){
            temp/=10;
            count++;
            }            
        temp=num;
        result=0;        
        while (temp){
            result+=pow((temp%10),count);
            temp/=10;
            }
        if (result==num)
            printf("%d ", result);}
    return 0;
}