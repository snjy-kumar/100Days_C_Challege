// check the given number is armstrong or not.
#include <stdio.h>
int main() {
  int i, org, rem, n, result;
  printf("Enter the number for checking armstrong: ");
  scanf("%d", &n);
  org = n;
  while (org != 0) {
    rem = org % 10;
    result += rem * rem * rem;
    org /= 10;
  }

  if (result = n) {
    printf("Armstrong");

  } else {
    printf("Not Armstrong");
  }

  return 0;
}

// to print  how long armstrong number you want.

#include <stdio.h>
int main() {
  int i, n, rem, result, a;
  printf("how long you want to print to: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    rem = i;
    result = 0;
    while (rem != 0) {
      a = rem % 10;
      result += a * a * a;
      rem /= 10;
    }
    if (result == i) {
      printf("%d\n", i);
    }
  }

  return 0;
}
