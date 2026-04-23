// max & min elements of array

#include <stdio.h>

int main(){

    int length;

    printf("Enter the length of array : ");
    scanf("%d", &length);

    int nums[length];

    for (int i=0; i<length; i++){
        printf("Enter the element at index %d : ", i);
        scanf("%d", &nums[i]);
    }
    int max=nums[0], min=nums[0];

    for (int i=1; i<length; i++){
        if (max<nums[i])
            max=nums[i];
        if (min>nums[i])
            min=nums[i];
    }
    printf("The maximum element of the array is %d\n", max);
    printf("The minimum element of the array is %d", min);    

    return 0;
}