#include <stdio.h>

int a, b; // global variable
int main() {
  // int a,b; //local variable
  printf("Enter the two values to find the greatest and smallest number: \n");
  scanf("%d%d", &a, &b);

  if (a > b) {
    printf("a = %d is greater than b = %d ", a, b);
  } else if (a < b) {
    printf("b = %d is greater than a = %d ", b, a);

  } else {
    printf("a = %d is equal to b = %d ", a, b);
  }
  return 0;
}