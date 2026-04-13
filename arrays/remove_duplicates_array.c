// Problem: Given a sorted array, remove duplicates and keep only unique elements.
// Logic: Traverse array and store elements different from last unique element.


#include <stdio.h>

int main()
{
    int n, i, j, arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n > 50 || n <= 0)
    {
        printf("Invalid value entered.\n");
        return 0;
    }

    printf("Enter elements (sorted):\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    j = 0; // index for unique elements

    for (i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

 
    printf("Array without duplicates:\n");

    for (i = 0; i <= j; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");


    return 0;
}