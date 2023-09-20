#include "stdio.h"
int main() {
  int n;
  scanf("%d", &n);
  int a[n], b[n];
  int c = 0;
  int cap = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a[i], &b[i]);
    c -= a[i];
    c += b[i];
    if (c > cap) {
      cap = c;
    }
  }
  printf("%d", cap);
  return 0;
}
