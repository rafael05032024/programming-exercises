#include <stdio.h>

int main()
{

  char digits[51];
  int t;
  long long sum = 0;

  scanf("%i", &t);

  for (int i = 0; i < t; i++)
  {
    scanf("%s", digits);

    for (int j = 0; digits[j] != '\0'; j++)
    {
      sum += digits[j] - '0';
    }

    printf("%lld\n", sum);

    sum = 0;
  }

  return 0;
}