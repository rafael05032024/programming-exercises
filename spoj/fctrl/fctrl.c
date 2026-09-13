#include <stdio.h>

long long zN(long long n);

/**
 * A. HQ9+
 */

int main()
{
  int t;

  scanf("%d", &t);

  while (t--)
  {
    long long n;

    scanf("%lld", &n);

    printf("%lld\n", zN(n));
  }

  return 0;
}

long long zN(long long n)
{
  long long i = 5, r = 0, z = n / i;

  while (z > 0)
  {
    r += z;
    i = i * 5;
    z = n / i;
  }

  return r;
}
