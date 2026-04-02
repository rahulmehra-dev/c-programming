// Problem: Count prime numbers till n using functions.
// Logic: For each number from 2 to n, check primality using sqrt(n) optimization.

#include <stdio.h>

int isPrime(int n);

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("No prime numbers till %d.\n", n);
    }
    
    else
    {
        for(int i = 2; i <= n; i++)
        {
            if (isPrime(i))
            {
                count++;
            }
        } 

        printf("Total prime numbers till %d: %d\n", n, count);
    
    }

    return 0;
}

int isPrime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;   
    }
    return 1;
}