// Problem: Move all 0s to the end of array, maintain order of non-zero elements.
// Logic: Move non-zero elements forward, then fill remaining positions with 0.


#include <stdio.h>

int main()
{
    int n, arr[50], i, j;

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
    
    j = 0; // index for non-zero elements

    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    // fill remaining positions with zeros.
    for (i = j; i < n; i++)
    {
        arr[i] = 0;
    }

    printf("After moving zeros to end:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");


    return 0;
}