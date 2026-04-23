#include <stdio.h>

int main () {

    int length, key, low, high, mid;

    printf("Enter length of array: ");
    scanf("%d", & length);

    int arr[length];

    for (int i=0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target element: ");
    scanf("%d", &key);

    low = 0; high = length-1;

    while (low <= high) {

        mid = (low + high)/2;

        if (arr[mid] == key) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (arr[mid] < key)
            low = mid+1;

        else
            high = mid-1;
        }
    printf("Element NOT FOUND");

    return 0;
}