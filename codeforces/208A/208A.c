#include <stdio.h>
#include <string.h>

int main()
{
  char strIn[200];
  int len, i, first, letters;

  scanf("%s", strIn);

  len = strlen(strIn);
  i = 0;
  first = 1;
  letters = 0;

  while (i < len)
  {
    if ((i + 2 < len) && (strIn[i] == 'W' && strIn[i + 1] == 'U' && strIn[i + 2] == 'B'))
    {
      i += 3;

      if (letters > 0 && i <= len - 1)
      {
        printf(" ");
      }

      continue;
    }

    printf("%c", strIn[i]);

    i++;
    letters++;
  }

  printf("\n");

  return 0;
}