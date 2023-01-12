#include <stdio.h>
int main() {
  // factors of the number
  int n, i;
  printf("Enter the number: ");
  scanf("%d", &n);

  for (i = 1; i <= n / 2; i++) {
    if (n % i == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}
