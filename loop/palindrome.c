#include <stdio.h>

int main() {
  // to check whether the number is palindrome or not
  int n, remender, reversed = 0, orginal;
  printf("Enter the number: ");
  scanf("%d", &n);
  orginal = n;

  while (n != 0) {
    remender = n % 10;
    reversed = reversed * 10 + remender;
    n /= 10;
  }
  if (orginal == reversed) {
    printf("The number %d is palindrome", orginal);
  } else {
    printf("The number%d is not palindrome", orginal);
  }

  return 0;
}