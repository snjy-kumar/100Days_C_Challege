#include <stdio.h>

int main() {
  // If-else basics
  int toCheck, num;
  printf("Enter the number for comparing:");
  scanf("%d", &toCheck);
  printf("Enter the number wants to compred:");
  scanf("%d", &num);
  if (num > toCheck) {
    printf("Number: %d is greater than %d", num, toCheck);
  } else if (num < toCheck) {
    printf("Number: %d is less than to %d", num, toCheck);
  } else {
    printf("Number: %d is equal to %d", num, toCheck);
  }

  return 0;
}