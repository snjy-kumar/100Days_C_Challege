// #include<stdio.h>
// int main()
// // Swapping two number using third variable.
// {
//     int x = 10, y = 15, temp;
//     temp = x;
//     x = y;
//     y = temp;
//     printf("x = %d and y = %d", x, y);
// }

// Swapping two numbers using bitwise operator or can say without third
// variable.
// #include <stdio.h>
// int main(){
//     int x = 19, y = 8;
//     x = x^y;
//     y = x^y;
//     x = x^y;
//     printf("x=%d and y = %d", x, y);
//     return 0;
// }

// Swappping two numbers using (addition,subtraction,) (multiplication,
// division) without using third variable.
#include <stdio.h>

void main() {
  int x = 6, y = 4;
  x = x + y;
  y = x - y;
  x = x - y;
  // x = x*y;
  // y = x/y;
  // x = x/y;
  printf("x = %d and y = %d", x, y);
}
