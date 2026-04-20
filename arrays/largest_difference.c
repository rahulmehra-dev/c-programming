// Problem: Given an array (prices), find maximum difference such that you buy first, then sell later.
// Logic: Track minimum price so far and calculate maximum profit at each step.


#include <stdio.h>

int main()
{
    int n, i, arr[50], min, profit = 0, max_profit = 0;

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

    min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        else
        {
            profit = arr[i] - min;

            if (profit > max_profit)
            {
                max_profit = profit;
            }
        }
    }

    printf("Maximum profit: %d\n", max_profit);
    
    return 0;
}