#include <stdio.h>
int main() {
  // find odd or even numbers using bitwise operator.
  for (int i = 0; i < 10; i++) {
    if (i & 1)
      printf("This is odd %d\n", i);
    else if (!(i & 1))
      printf("This is even %d\n ", i);
  }

  return 0;
}
