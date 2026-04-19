// Problem: Check if array is sorted in ascending order.
// Logic: Traverse and check if adjacent elements are in ascending order.


#include <stdio.h>

int main()
{
    int n, i, arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n > 50 || n <= 0)
    {
        printf("Invalid value entered.\n");
        return 0;
    }

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1 ; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            printf("Array is not sorted in ascending order.\n");
            return 0;
        }
    }

    printf("Array is sorted in ascending order.\n");

    return 0;
}