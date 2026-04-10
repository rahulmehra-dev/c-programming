// Problem: Count number of even and odd elements in array.
// Logic: Traverse array and check each element using % 2.


#include <stdio.h>
int main()
{
    int n, i, count_odd = 0, count_even = 0, arr[50];

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

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_even++;
        }

        else
        {
            count_odd++;
        }
    }

    printf("Total even elements: %d\n", count_even);
    printf("Total odd elements: %d\n", count_odd);


    return 0;
}