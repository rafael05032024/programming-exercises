#include <stdio.h>

int main()
{
  long long n, aN, a1, a2, sT, sAux;
  int first;

  scanf("%lld", &n);

  first = 1;
  sAux = 0;
  sT = 0;

  for (long long i = 0; i < n; i++)
  {
    scanf("%lld", &aN);

    if (first == 1)
    {
      a1 = aN;
      first = 0;
    }

    if (aN >= a1)
    {
      sAux++;
    }
    else
    {
      if (sAux > sT)
      {
        sT = sAux;
      }

      sAux = 1;
    }

    a1 = aN;
  }

  if (sT == 0 || sAux > sT)
  {
    sT = sAux;
  }

  printf("%lld\n", sT);

  return 0;
}