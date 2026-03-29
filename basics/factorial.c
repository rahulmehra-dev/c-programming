// Problem: Find factorial of a number
// Logic: Multiply numbers from 1 to n using a loop

#include <stdio.h>
int main()
{
    int n, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<0)
    {
        printf("Factorial can't be defined for negative numbers.");
    }

    else
    {
        for(int i=1; i<=n ;i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d is: %d", n, factorial);
    }

    return 0;
}