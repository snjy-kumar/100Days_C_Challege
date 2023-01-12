#include <stdio.h>

int main(){
  int d, years, months, weeks;
  printf("Enter the Days: ");
  (void)scanf("%d",&d);
  
  years = d/365;
  weeks = (years%365)/7;
  // months = years%12;
  printf("Days: %d\nYears: %d\nMonths: %d\nWeeks: %d\n",d,years,months,weeks);
  return 0;
  
}