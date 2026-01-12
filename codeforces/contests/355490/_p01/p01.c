#include <stdio.h>

/**
 * P01. Reverse an array
 */

int main()
{

  int a;
  long long n, arr[1000000];

  scanf("%lld", &n);

  for (long long i = 0; i < n; i++)
  {
    scanf("%i", &a);

    arr[i] = a;
  }

  int first = 1;
  for (long long j = n - 1; j >= 0; j--)
  {
    if (first == 1)
    {
      printf("%lld", arr[j]);

      first = 0;
    }
    else
    {
      printf(" %lld", arr[j]);
    }
  }

  printf("\n");

  return 0;
}
