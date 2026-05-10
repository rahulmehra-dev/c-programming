// Program: Print fibonacci series till number n
// Concept: Recursion in C
// Description: Print first n terms of fibonacci series using recursion.

#include <stdio.h>

int fibonacci(int x);

int main()
{
    int n, i;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Enter a vaild number.\n");
        return 0;
    }

    printf("First %d terms of Fibonacci series:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}

int fibonacci(int x)
{
    if (x == 0)
    {
        return 0;
    }

    if (x == 1)
    {
        return 1;
    }

    return fibonacci(x - 1) + fibonacci(x - 2);
}