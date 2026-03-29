// Problem: Calculate reverse of a number
// Logic: Extract digits using modulus (%) and build reverse using multiplication.

#include <stdio.h>
int main()
{
    int n, remainder, original, reverse = 0;

    printf("Enter a number: ");
    scanf("%d",&n);

    original = n;

    while(n > 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n/10;
    }

    printf("Reverse of %d is: %d", original, reverse);

    return 0;
}
