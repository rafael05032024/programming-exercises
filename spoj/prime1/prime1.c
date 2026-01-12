#include <stdio.h>
#include <stdbool.h>

int isPrime(int number);
void set(long int index, long int value);
int get(long int index);

void load();

int memo[100001];
long int shortest;
long int longest;

int main()
{

  int t;
  long int n, m;

  scanf("%i", &t);

  for (int i = 0; i < t; i++)
  {
    scanf("%ld %ld", &n, &m);

    shortest = n;
    longest = m;

    load();

    for (long int j = n; j <= m; j++)
    {
      if (isPrime(j) == 1)
      {
        printf("%ld\n", j);
      }
    }

    printf("\n");
  }

  return 0;
}

int isPrime(int number)
{
  if (number == 1)
  {
    return 0;
  }

  if (get(number) == 0 || get(number) == 1)
  {
    return get(number);
  }

  for (int i = 2; (i * i) <= number; i++)
  {
    if (number % i == 0)
    {
      for (int j = number; j <= longest; j += i)
      {
        set(j, 0);
      }

      return 0;
    }
  }

  set(number, 1);

  for (int i = number * 2; i <= longest; i += number)
  {
    set(i, 0);
  }

  return 1;
}

void load()
{
  for (int i = 0; i <= longest - shortest; i++)
  {
    memo[i] = -1;
  }
}

void set(long int index, long int newValue)
{
  if (get(index) == -1)
  {
    memo[index - shortest] = newValue;
  }
}

int get(long int index)
{
  return memo[index - shortest];
}