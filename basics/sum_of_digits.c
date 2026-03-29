// Problem: Caluculate sum of digits of a number
// Logic: Extract the digits of a number using modulus (%) and add them using loops


#include <stdio.h>
int main()
{
    int n, original, digit, sum = 0;

    printf("Enter a number : ");
    scanf("%d",&n);

    original = n;

    while(n > 0)                            
    {
     digit = n % 10;
     sum += digit;
     n = n/10;
    }

    printf("sum of digits of %d is: %d", original, sum);

    return 0;
}
