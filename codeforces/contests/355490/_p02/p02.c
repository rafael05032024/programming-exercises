#include <stdio.h>

/**
 * P02. Candies
 */

int main()
{

  int cI;
  long long n, a, b, sum, arr[1000000];

  scanf("%lld", &n);

  for (long long i = 0; i < n; i++)
  {
    scanf("%i", &cI);

    arr[i] = cI;
  }

  scanf("%lld %lld", &a, &b);

  sum = 0;

  for (long long j = a; j <= b; j++)
  {
    sum += arr[j];
  }

  printf("%lld\n", sum);

  return 0;
}
