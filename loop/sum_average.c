#include <stdio.h>
int main() {

  int n, i;
  float sum = 0, x;
  float avr;
  printf("How many numbers you want to put in for average: ");
  scanf("%d", &n);

  printf("Enter the elements: ");
  for (int i = 0; i < n; i++) {
    scanf("%f", &x);
    sum += x;
  }
  printf("the sum of the number is %.2f\n", sum);
  printf("the average of the number is %.2f", sum / n);

  return 0;
}
