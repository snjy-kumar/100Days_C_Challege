#include <stdio.h>

int main(void) {
  int rows;
  printf("Enter the No. of Rows: \n");
  scanf("%d", &rows);
  // printf("%d", rows);

  for(int i = 1; i<=rows;i++){
    for(int space = 1; space <= (rows -i); space++){
      printf(" ");
    }
    for(int j= 1; j<= (2*i-1); j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}