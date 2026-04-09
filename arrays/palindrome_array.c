// Problem: Check if an array is palindrome or not.
// Logic: Compare values from first and last elements and move towards center.

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

    printf("Enter elements in array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            printf("Array is not palindrome.\n");
            return 0;
        }
    }

    printf("Array is palindrome.\n");

    return 0;
}