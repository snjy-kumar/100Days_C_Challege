#include <stdio.h>

int main() {
  // basics switch case
  int day;
  printf("Enter the number to see the day: ");
  scanf("%d", &day);
  switch (day) {
  case 1:
    printf("Monday");
    break; // break is necessary to not print other from here is case is
           // satisfied.
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  default:
    printf("Please enter the valid number 1-7 only.");
  }

  return 0;
}

#include <stdio.h>

int main() {
  // to check character is vowel or consonant by using switch case.
  char toCheck;
  printf("Enter the character for checking :");
  scanf("%c", &toCheck);

  switch (toCheck) {
  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
    printf("Entered character is vowel: %c", toCheck);
    break;
  default:
    printf("Entered character is consonant: %c", toCheck);
  }

  return 0;
}