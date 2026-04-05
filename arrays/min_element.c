// Problem: Find the smallest element in an array.
// Logic: Assume first element as min and compare with rest.


#include <stdio.h>
int main()
{
    int n, i, arr[50], min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n > 50 || n <= 0)
    {
        printf("Invalid value entered.\n");
        return 0;
    }

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Smallest element in array: %d\n", min);


    return 0;
}