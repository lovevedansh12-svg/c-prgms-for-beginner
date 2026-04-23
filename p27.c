// SELECTION SORT

#include <stdio.h>
int main()
{
    int length;
    printf("Enter the length of the array : ");
    scanf("%d", &length);
    int arr[length];
    printf("Enter the elements of array : ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min, temp;
    for (int i = 0; i < length - 1; i++) 
    {
        min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("Array after sorting (in ascending order) using SELECTION SORT TECHNIQUE :\n");

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}