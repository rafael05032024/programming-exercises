#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * P04. Petya and Strings
 */

int main()
{

  int n;
  char s1[101], s2[101];

  scanf("%s", s1);
  scanf("%s", s2);

  int len = strlen(s1);
  int r = 0;

  for (int i = 0; i < len; i++)
  {
    char c1 = tolower(s1[i]);
    char c2 = tolower(s2[i]);

    if (c1 != c2)
    {
      if (c1 < c2)
      {
        r = -1;
      }
      else
      {
        r = 1;
      }

      break;
    }
  }

  printf("%i\n", r);

  return 0;
}
