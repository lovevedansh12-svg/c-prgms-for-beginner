// INSERTION SORT

#include <stdio.h>
int main()
{int length; printf("Enter the length of the array : ");
    scanf("%d", &length); int arr[length];
    printf("Enter the elements of array : ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 1; i < length; i++)
    {
        int j = i, temp;
        while (j>0 && arr[j] < arr[j - 1])
        {
            temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    printf("SORTED ARRAY using Insertion Sort :\n");

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}