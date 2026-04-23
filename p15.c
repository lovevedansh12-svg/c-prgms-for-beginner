// fibonacci series

#include <stdio.h>

int main(){

    int num, t1=0, t2=1, temp;

    printf("How many terms?\n");
    scanf("%d", &num);

    printf("Here's your fibonacci series :\n");

    if (num==1){
        printf("%d ", t1);
    }
    else if (num==2){
        printf("%d %d", t1, t2);
    }
    else{
        printf("%d %d ", t1, t2);
        for (int i=3; i<=num; i++){
            temp=t2;
            t2=t1+t2;
            t1=temp;
            printf("%d ", t2);}
        }
    
    return 0;
}
