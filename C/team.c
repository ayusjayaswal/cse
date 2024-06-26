#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int a, b, c;
  int solv = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c >= 2)
      solv++;
  }
  printf("%d", solv);
  return 0;
}
