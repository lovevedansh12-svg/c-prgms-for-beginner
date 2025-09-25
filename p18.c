// reverse of a number
#include <stdio.h>

int main(){

    int num, rev=0, temp;

    printf("Enter the number to reverse : ");
    scanf("%d", &num);

    while(num>0){
        rev=rev*10;
        temp=num%10;
        rev=rev+temp;
        num=num/10;
    }
    printf("Here's the reverse :\n%d", rev);
}