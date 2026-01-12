#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include <stdint.h>

/**
 * A. Even Odds
 */

int main()
{
  int64_t n, k, r, odds;

  scanf("%" SCNd64 " %" SCNd64, &n, &k);

  odds = ceil(((double)n) / 2);

  if (k <= odds)
  {
    r = 2 * k - 1;
  }
  else
  {
    r = 2 * (k - odds);
  }

  printf("%" PRId64 "\n", r);

  return 0;
}