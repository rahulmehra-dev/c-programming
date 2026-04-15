// Problem: Shift all elements of array right by 1 position.
// Logic: Store last element, shift all elements right, then place last element at first.


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

    temp = arr[n - 1];

    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1]; 
    }

    arr[0] = temp;
    
    printf("After right rotation:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");


    return 0;
}