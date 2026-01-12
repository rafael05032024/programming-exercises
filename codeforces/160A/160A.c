#include <stdio.h>
#include <stdlib.h>

int compFn(const void *a, const void *b);

int main()
{

  int n, aI, k, sum, c, coins[101];

  int tests[] = {2, 1, 2};

  scanf("%i", &n);

  sum = 0;

  for (int i = 0; i < n; i++)
  {
    scanf("%i", &aI);

    sum += aI;
    coins[i] = aI;
  }

  qsort(coins, n, sizeof(int), compFn);

  c = 0;
  k = 0;

  for (int i = 0; i < n; i++)
  {
    c++;

    k += coins[i];

    if (k > (sum - k))
    {
      break;
    }
  }

  printf("%i\n", c);

  return 0;
}

int compFn(const void *a, const void *b)
{
  int x = *(const int *)a;
  int y = *(const int *)b;

  if (x < y)
    return 1;
  if (x > y)
    return -1;

  return 0;
}