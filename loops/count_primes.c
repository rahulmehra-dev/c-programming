//Problem: Count prime numbers till number n.
//Logic: start loop from 2 till n and check divisibility with 2 till sqrt(i). 


#include <stdio.h>
int main()
{
    int n, i, j, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<2)
    {
        printf("No prime numbers found. \n");
    }
    else
    {
        printf("Prime numbers are these: \n");

        for(i=2; i<=n ;i++)
        {
            int isPrime = 1;

            for(j=2; j*j <= i ;j++)
            {
                if(i%j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime)
            {
                printf("%d \n", i);
                count++;
            }

        }
    }

    printf("Total prime numbers till %d is: %d\n", n, count);

    return 0;
}
