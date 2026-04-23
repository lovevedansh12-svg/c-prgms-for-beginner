// search for an element in array using Linear Search

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
    int target;
    
    printf("Enter the element to search for : ");
    scanf("%d", &target);

    for (int i=0; i<length; i++){
        if(nums[i]==target){
            printf("Element %d found at index %d", target, i);
            return 0;
        }
    }
    printf("ELEMENT NOT FOUND!!!");
    return 0;
}  