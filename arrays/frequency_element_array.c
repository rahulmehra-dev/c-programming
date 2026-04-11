// Problem: Count how many times a given element appears in the array.
// Logic: Traverse array and count elements equal to given number.


#include <stdio.h>
int main()
{
    int n, i, number, frequency, arr[50];

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

    printf("Enter an element for frequency check: ");
    scanf("%d", &number);

    frequency = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            frequency++;
        }
    }

    printf("Frequency of %d: %d\n", number, frequency);


    return 0;
}