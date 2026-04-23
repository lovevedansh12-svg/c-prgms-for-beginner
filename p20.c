// binary to decimal & vice-versa

#include <stdio.h>

int main(){

    int choice; long long int num, result=0, i=1;

    printf("* d-to-b conversion : press 0 \n");
    printf("* b-to-d conversion : press any number other than 0 \n\n->");
    scanf("%d", &choice);

    if (choice==0){

        printf("\nPlease enter a decimal number : ");
        scanf("%lld", &num);

        while (num){
            result=result+(num%2)*i;
            num/=2;
            i*=10;
        }
        printf("Binary equivalent is %lld\n", result);
    }
    else{
        printf("\nPlease enter a binary number : ");
        scanf("%lld", &num);

        int isvalid = 1;

        while (num){
            int dig=num%10;
            if (dig>1){
                isvalid=0;
                break;}
                
            else{
                result+=dig*i;
                num/=10;
                i*=2;}
        }
        if (!isvalid)
            printf("You entered INVALID BINARY\n");

        else
            printf("Decimal equivalent is %lld\n", result);
        }
    return 0;
}