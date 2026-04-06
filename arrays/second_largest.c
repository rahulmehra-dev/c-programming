// Problem: Find second largest element in an array.
// Logic: Track largest and second largest in one pass.

#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i, arr[50], sec_lar, lar;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n > 50 || n <= 1)
    {
        printf("Invalid value entered.\n");
        return 0;
    }

    printf("Enter elements in array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    lar = sec_lar = INT_MIN;

    for ( i = 0; i < n; i++)
    {
        if(arr[i] > lar)
        {
            sec_lar = lar;
            lar = arr[i];
        }

        else if (arr[i] > sec_lar && arr[i] != lar)
        {
            sec_lar = arr[i];
        }
    }

    if(sec_lar == INT_MIN)
    {
        printf("No second largest element.\n");
    }

    else
    {
        printf("Second largest element: %d\n", sec_lar);
    }

    return 0;
}