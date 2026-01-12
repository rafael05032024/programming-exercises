#include <stdio.h>
#include <string.h>

/**
 * P03. Way Too Long Words
 */

int main()
{

  int n;
  char word[101];

  scanf("%i", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%s", word);

    int len = strlen(word);

    if (len > 10)
    {
      printf("%c%i%c\n", word[0], (len - 2), word[len - 1]);
    }
    else
    {
      printf("%s\n", word);
    }
  }

  return 0;
}
