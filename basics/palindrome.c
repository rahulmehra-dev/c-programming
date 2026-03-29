// Problem: Check if a number is palindrome
// Logic: Extract reverse using modulus (%) and compare with original number


#include <stdio.h>
int main()
{
  int n, remainder, original, reverse = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  original = n;
  
  while(n > 0)
  {
      remainder = n % 10;
      reverse = reverse * 10 + remainder;
      n = n / 10;
  }
  
  if(reverse == original)
  {
    printf("%d is a palindrome", original);
  }

  else
  {
    printf("%d is not a palindrome", original);
  }

  return 0;
}
