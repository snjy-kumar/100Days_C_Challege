#include <stdio.h>

int main() {
  // reverse of string using loop
  char org[10], rev[10];
  int i, j, count = 0;
  printf("Enter the string for reverse: ");
  scanf("%s", &org);
  printf("Original string:%s ", org);
  // for counting string length
  while (org[count] != '\0') {
    count++;
  }
  j = count - 1;

  // for reversing the string
  for (i = 0; i < count; i++) {
    rev[i] = org[j];
    j--;
  }
  printf("%s", rev);

  return 0;
}

// Reverse a String by swapping the characters of the string
#include <stdio.h>
#include <string.h>
void rev(char str[]) {
  int n = strlen(str);

  for (int i = 0; i < n / 2; i++) {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}

int main() {
  char str[100];
  printf("Enter the string : ");
  scanf("%s", str);
  printf("\nString Before Reverse: %s", str);
  rev(str);
  printf("\nString After Reverse: %s", str);
  return 0;
}
