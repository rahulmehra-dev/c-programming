// Problem: Check whether a number is prime using functions.
// Logic: Check divisibility from 2 to sqrt(n)

#include <stdio.h>

int isPrime(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a prime number.\n", n);

    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }

    return 1;

}