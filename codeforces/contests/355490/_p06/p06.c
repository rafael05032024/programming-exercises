#include <stdio.h>
#include <string.h>

/**
 * P06. Helpful Maths
 */

int main()
{

  char ex[101];

  scanf("%s", ex);

  int len = strlen(ex);

  int digits[3] = {0};

  for (int i = 0; i < len; i++)
  {
    if (ex[i] == '1')
    {
      digits[0]++;
    }

    if (ex[i] == '2')
    {
      digits[1]++;
    }

    if (ex[i] == '3')
    {
      digits[2]++;
    }
  }

  int first = 1;
  for (int i = 0; i < 3; i++)
  {
    if (digits[i] > 0)
    {
      for (int j = 0; j < digits[i]; j++)
      {
        if (first)
        {
          printf("%i", i + 1);

          first = 0;
        }
        else
        {
          printf("+%i", i + 1);
        }
      }
    }
  }

  printf("\n");

  return 0;
}
