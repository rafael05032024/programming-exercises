#include <stdio.h>
#include <string.h>

/**
 * P05. Football
 */

int main()
{

  int n;
  char team[101];

  scanf("%s", team);

  int len = strlen(team);
  int o = 1;
  int d = 1;
  char c = team[0];

  for (int i = 0; i < len; i++)
  {
    if (c != team[i])
    {
      o = 1;
      c = team[i];
    }
    else
    {
      o++;
    }

    if (o >= 7)
    {
      d = -1;
      break;
    }
  }

  if (d == 1)
  {
    printf("%s\n", "NO");
  }
  else
  {
    printf("%s\n", "YES");
  }

  return 0;
}
