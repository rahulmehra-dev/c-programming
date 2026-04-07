// Problem: Reverse an array.
// Logic: Swap first and last elements moving towards the center.


#include <stdio.h>
int main()
{
    int n, i, temp, arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n > 50 || n <= 0)
    {
        printf("Invalid value entered.\n");
        return 0;
    }

    printf("Enter elements in array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

     // Reverse logic using swapping                    
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\nReversed array:\n");
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
   
    return 0;
}