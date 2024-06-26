#include "stdio.h"
#include <math.h>
int main() {
  int n;
  scanf("%d", &n);
  int i = 0;
  int ans = 0;
  while (n > 0) {
    int r = n % 2;
    n = n / 2;
    printf("r: %d i: %d\n", r, i);
    ans += r * pow(10, i);
    printf("%d\n", ans);

    i++;
  }
}
