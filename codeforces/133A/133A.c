#include <stdio.h>
#include <string.h>

/**
 * A. HQ9+
 */

int main()
{
  char q[100];

  scanf("%s", q);

  int len = strlen(q);
  int r = 0;

  for (int i = 0; i < len; i++)
  {
    if (q[i] == 'H' || q[i] == 'Q' || q[i] == '9')
    {
      r = 1;

      break;
    }
  }

  printf("%s\n", r == 1 ? "YES" : "NO");

  return 0;
}
