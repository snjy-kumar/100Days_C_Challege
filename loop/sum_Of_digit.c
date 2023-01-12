#include <stdio.h>

int main() {
  // find the sum of entered numberes like 5321--> 5+3+2+1 = 11
  int n, remender, reversed = 0, orginal;
  printf("Enter the number: ");
  scanf("%d", &n);
  orginal = n;

  while (n != 0) {
    remender = n % 10;
    reversed = reversed + remender;
    n /= 10;
  }
  printf("The sum is %d ", reversed);
  return 0;
}

// sum of element you have put input each time
#include <stdio.h>

int main() {
  // find the sum of entered numberes like 5321--> 5+3+2+1 = 11
  int n, sum = 0, result;
  printf("Enter the number: ");
  scanf("%d", &n);

  for (int i = 1; i < n; i++) {
    printf("Enter the %d number: ", i);
    scanf("%d", &result);
    sum += result;
  }

  printf("The sum is %d ", sum);
  return 0;
}