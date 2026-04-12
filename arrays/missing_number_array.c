// Problem: Find a missing number from a given array.
// Logic: Find expected sum and subtract from actual sum.


#include <stdio.h>

int main()
{
    int n, i, N, actual_sum = 0, expected_sum, missing, arr[50];

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
        actual_sum += arr[i];
    }

    N = n + 1;
    expected_sum = N * (N + 1) / 2;
    missing = expected_sum - actual_sum;

    printf("Missing number: %d\n", missing);


    return 0;
}