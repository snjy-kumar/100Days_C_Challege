#include <stdio.h>

int main() {
  int row;
  printf("Entrer the rows :");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", i);
      if (i > j) {
        printf("*");
      }
    }
    printf("\n");
  }

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
      // printf("%d",i);
    }
    printf("\n");
  }

  for (int i = 1; i <= row; i++) {
    for (int space = 1; space <= row - i; space++) {
      printf(" ");
      }
      for (int j = 1; j <= (2* i - 1); j++) {
        printf("*");
      }
      printf("\n");
    }

    return 0;
  }