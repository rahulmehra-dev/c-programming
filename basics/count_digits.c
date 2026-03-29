// Problem: Count number of digits
// Logic: Divide number by 10 repeatedly and count iterations


#include <stdio.h>
int main()
{
    int n, original, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    if(n == 0)
    {
        count = 1;
    }

    else
    {
        if(n < 0)
        {
            n = -n;
        }

        while(n > 0)
        {
            n = n / 10;
            count++;
        }
    }

    printf("There are %d digits in %d\n", count, original);

    return 0;
}
