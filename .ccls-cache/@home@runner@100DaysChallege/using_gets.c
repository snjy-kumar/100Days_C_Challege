// Online C compiler to run C program online
#include <stdio.h>

int main() {
  // Write C code here
  // using gets to print string with space which takes inputt from users.
  char name[20];
  printf("Enter your full name with space : ");
  gets(name);
  printf("Your name is : %s", name);

  return 0;
}

#include <ctype.h>
#include <stdio.h>

// to check whether the enterd character is lowercase or uppercase and
// manipulate that by using some function with the help of ctype header file.
int main() {
  // to change character to upper to lower and vice versa.
  char alphabet;
  printf("Enter the character: ");
  // alphabet=getchar(); //this can be used also
  scanf("%c", &alphabet);
  // putchar(alphabet);
  if (islower(alphabet)) {
    putchar(toupper(alphabet));
  } else {
    putchar(tolower(alphabet));
  }
  return 0;
}