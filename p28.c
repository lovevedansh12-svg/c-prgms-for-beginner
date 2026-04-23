// BUBBLE SORT

#include <stdio.h>

int main()
{int length; printf("Enter the length of the array : ");
    scanf("%d", &length); int arr[length];
    printf("Enter the elements of array : ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int temp, flag;

    for (int i = 0; i < length - 1; i++)
    {

        flag = true;

        for (int j = 0; j < length - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag)
            break;
    }
    printf("\n\nArray after sorting (in ascending order) using BUBBLE SORT TECHNIQUE :\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}