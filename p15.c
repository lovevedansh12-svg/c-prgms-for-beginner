// fibonacci series

#include <stdio.h>

int main(){

    int n, t1=0, t2=1, temp;

    printf("How many terms?\n");
    scanf("%d", &n);

    printf("Here's your fibonacci series :\n");

    printf("%d ", t1);
    printf("%d ", t2);

    for (int i=2; i<n; i++)
       {temp=t2;
        t2=t1+t2;
        t1=temp;
        printf("%d ", t2);}
    
    return 0;
}