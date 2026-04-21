// Problem: Find element that appears more than n/2 times.
// Logic: For each element, count occurrences and check if it exceeds n/2.


#include <stdio.h>

int main()
{
    int n, i, j, arr[50], count;

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

    for (i =  0; i < n; i++)
    {
        count = 1;

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > n / 2)
        {
            printf("Majority element %d appears: %d\n", arr[i], count);
            return 0;
        }
    }

    printf("No majority element found.\n");

    return 0;
}