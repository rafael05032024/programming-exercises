#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char *toBinary(int n);
long long sum(char *a1, char *a2);

int main()
{
  int n, c = 0;
  char *residents[1000001];
  long long number, friendship = 0;

  scanf("%i", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &number);

    residents[i] = toBinary(number);

    printf("%s\n", residents[i]);

    /*if (i > 0)
    {
      for (int j = 0; j < i; j++)
      {
        friendship += sum(residents[i], residents[j]);
      }
    }*/

    printf("|friendship.: %lld|\n", friendship);
  }

  // printf("%lld\n", friendship);

  return 0;
}

long long sum(char *a1, char *a2)
{
  int i1 = 0, i2 = 0, p = 0, r;
  short one = 49, zero = 48;
  long long sum = 0;
  char v1 = a1[i1], v2 = a2[i2];

  while (1)
  {
    if ((v1 == one && v2 == zero) || (v2 == one && v1 == zero))
    {
      r = 1;
    }
    else
    {
      r = 0;
    }

    sum += r * pow(2, p);

    p++;

    if (a1[i1 + 1] == '\0' && a2[i2 + 1] == '\0')
    {
      break;
    }

    if (a1[i1 + 1] != '\0')
    {
      i1++;
      v1 = a1[i1];
    }
    else
    {
      v1 = zero;
    }

    if (a2[i2 + 1] != '\0')
    {
      i2++;
      v2 = a2[i2];
    }
    else
    {
      v2 = zero;
    }
  }

  return sum;
}

char *toBinary(int n)
{
  char *binary = malloc(32);

  int r, q, i;

  i = 0;
  q = n;

  while (q > 0)
  {

    r = q % 2;

    binary[i] = r + '0';

    q = q / 2;
    i++;
  }

  return binary;
}

void printBinary(unsigned int n)
{
  for (int i = 31; i >= 0; i--)
    putchar((n & (1u << i)) ? '1' : '0');
  putchar('\n');
}

void toBinary2(unsigned int n, char *bin)
{
  int started = 0;
  int i = 0;

  for (int bit = 31; bit >= 0; bit--)
  {
    int b = (n >> bit) & 1;

    if (b || started)
    {
      bin[i++] = b + '0';
      started = 1;
    }
  }

  if (!started)
    bin[i++] = '0';

  bin[i] = '\0';
}