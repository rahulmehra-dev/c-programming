// Program: Sum of N Natural Numbers using Recursion
// Concept: Recursion in C
// Description: Calculates the sum of first N natural numbers using recursive function.

#include <stdio.h>

int Sum(int n);

int main()
{
    int n;
    int sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a positive number.\n");
        return 0;
    }

    sum = Sum(n);

    printf("Sum of first %d natural numbers: %d\n", n, sum);
    
    return 0;
}

int Sum(int n)
{
    // base condition
    if (n == 0)
    {
        return 0;
    }

    return n + Sum(n - 1);
}