#include <stdio.h>

// using for loop find the factorial of the number ex:  6! = 720.
int main() {
  // int n = 6;
  // long int fact = 1;
  // for(int i = 1; i <=n ; i++){
  //     fact = fact * i;
  // }
  // printf("%d", fact);

  // using while loop
  int n, fact = 1, i = 1;
  printf("Enter the number for factorial:");
  scanf("%d", &n);
  while (i <= n) {
    fact = fact * i;
    i++;
  }
  printf("%d", fact);

  return 0;
}