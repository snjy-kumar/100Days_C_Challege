#include <stdio.h>

int main() {
  // to print the fibonacci series
  // int i,n, t1=0, t2=1, nexTerm;
  // // printf("%d%d",t1,t2);
  // nexTerm = t1 +t2;
  // printf("How many terms you want to printf of fibonacci series:");
  // scanf("%d", &n);
  // printf("%d\t%d\t",t1,t2);

  // for(i=3; i<=n; ++i){
  //     printf("%d\t",nexTerm);
  //     t1= t2;
  //     t2 = nexTerm;
  //     nexTerm = t1 + t2;
  // }

  // fibonacci series upto certain number
  int n, t1 = 0, t2 = 1, nexTerm;
  printf("Enter the number which fibonacci goes upto:");
  scanf("%d", &n);
  printf("%d\t%d\t", t1, t2);
  nexTerm = t1 + t2;

  while (nexTerm <= n) {
    printf("%d\t", nexTerm);
    t1 = t2;
    t2 = nexTerm;
    nexTerm = t1 + t2;
  }

  return 0;
}