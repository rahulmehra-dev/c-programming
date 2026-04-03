//Problem: Find sum of array elements.
//Logic: Take input in array and accumulate sum during traversal.


#include <stdio.h>
int main()
{
    int n, arr[50], sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n > 50 || n <= 0 )
    {
        printf("Invalid number of elements.\n");
        return 0;
    }

    printf("Enter the elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nSum of array elements: %d\n", sum);
    
    return 0;
}