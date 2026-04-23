// input two arrays & save sum of corresponding elements in third

#include <stdio.h>

int main(){

    int length;

    printf("Enter the length of the arrays : ");
    scanf("%d", &length);

    int nums1[length], nums2[length], result[length];

    printf("Enter elements of first array below ->\n");

    for (int i=0; i<length; i++){
        printf("Enter the element at index %d : ", i);
        scanf("%d", &nums1[i]);
    }
    printf("Enter elements of second array below ->\n");

    for (int i=0; i<length; i++){
        printf("Enter the element at index %d : ", i);
        scanf("%d", &nums2[i]);
    }

    printf("The resultant array is :\n");

    for (int i=0; i<length; i++){
        result[i]=0;
        result[i]=nums1[i]+nums2[i];
        printf("%d ", result[i]);
    }
    return 0;
}