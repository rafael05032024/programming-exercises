#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  long long cnt[21] = {0};
  long long x;

  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &x);
    for (int b = 0; b < 21; b++)
    {
      if (x & (1LL << b))
      {
        cnt[b]++;
      }
    }
  }

  long long ans = 0;
  for (int b = 0; b < 21; b++)
  {
    ans += cnt[b] * (n - cnt[b]) * (1LL << b);
  }

  printf("%lld\n", ans);
  return 0;
}
