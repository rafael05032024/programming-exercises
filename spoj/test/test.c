#include <stdio.h>

int main() {

  int number;

  while(1) {
    scanf("%i", &number);

    if (number == 42) {
      break;
    }

    printf("%i\n", number);
  }

  return 0;
}