// Problem: Find the largest element in an array.
// Logic: Assume first element as max and compare with rest.


#include <stdio.h>
int main()
{
    int n, i, arr[50], max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > 50 || n <= 0)
    {
        printf("Invalid number entered.\n");
        return 0;
    }

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Largest element in array: %d\n", max);


    return 0;
}