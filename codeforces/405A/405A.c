#include <stdio.h>
#include <stdlib.h>

int cmpFn(const void *a, const void *b);

int main()
{
  int n, aI, cubes[100];

  scanf("%i", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%i", &aI);

    cubes[i] = aI;
  }

  qsort(cubes, n, sizeof(int), cmpFn);

  int first = 1;
  for (int i = 0; i < n; i++)
  {
    if (first == 1)
    {
      printf("%i", cubes[i]);
      first = 0;
    }
    else
    {
      printf(" %i", cubes[i]);
    }
  }

  printf("\n");

  return 0;
}

int cmpFn(const void *a, const void *b)
{
  int x = *(const int *)a;
  int y = *(const int *)b;

  if (x > y)
    return 1;
  if (x < y)
    return -1;

  return 0;
}