// Problem: Shift all elements of array left by 1 position.
// Logic: Store first element, shift all elements left, then place first element at end.


#include <stdio.h>

int main()
{
    int n, i, arr[50], temp;

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

    temp = arr[0];

    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;

    printf("After left rotation:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");


    return 0;
}