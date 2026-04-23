// input elements of array and find their sum

#include <stdio.h>

int main(){

    int length;

    printf("Enter the length of array : ");
    scanf("%d", &length);

    int nums[length], sum=0;

    for (int i=0; i<length; i++){
        printf("Enter the element at index %d : ", i);
        scanf("%d", &nums[i]);
        sum+=nums[i];
    }
    printf("The sum of the elements of the array is %d", sum);

    return 0;
}