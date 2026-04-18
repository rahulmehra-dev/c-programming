// Problem: Check if any two elements in array add up to a given target, in an improved manner.
// Logic: For each element, check if (target - current) exists among previous elements.


#include <stdio.h>

int main()
{
    int n, i, j, arr[50], target;

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

    printf("Enter number for pair: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[j] == target - arr[i])
            {
                printf("Pair found: %d and %d\n", arr[j], arr[i]);
                return 0;
            }
        }
    }

    printf("No pair found.\n");
    
    return 0;   
}