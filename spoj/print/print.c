#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

void loadSieve(long long length);

bool memo[1000001];
bool sieve[46340];
long long shortest;
long long longest;
int total = 0;

int main()
{

  int t;
  long long n, m;

  loadSieve(2147483647);

  scanf("%i", &t);

  for (int i = 0; i < t; i++)
  {
    scanf("%lld %lld", &n, &m);

    shortest = n;
    longest = m;

    for (long long i = 0; i <= m - n; i++)
    {
      memo[i] = true;
    }

    int primes = sqrt(longest);

    int count = 0;
    int p = 2;

    while (count < primes)
    {
      if (sieve[p] == true)
      {
        long long multiple = MAX(p * p, ceil((double)shortest / p) * p);

        for (long long i = multiple; i <= longest; i += p)
        {
          memo[i - shortest] = false;
        }

        count++;
      }

      p++;

      if (p >= total)
      {
        break;
      }
    }

    for (long long j = n; j <= m; j++)
    {

      if (memo[j - shortest] == true)
      {
        printf("%lld\n", j);
      }
    }
  }

  return 0;
}

void loadSieve(long long length)
{
  int qty = sqrt(length);

  for (int i = 0; i < qty; i++)
  {
    sieve[i] = true;
  }

  for (int i = 2; i < qty + 2; i++)
  {
    if (sieve[i] == true)
    {
      for (int j = i * i; j < qty; j += i)
      {
        sieve[j] = false;
      }
    }
  }

  total = qty;
}
