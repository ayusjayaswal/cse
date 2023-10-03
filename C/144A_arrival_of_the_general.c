#include "stdio.h"
int max_id(int n, int a[n]) {
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (a[j] < a[i])
      j = i;
  }
  return j;
}

int min_id(int n, int a[n]) {
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (a[j] >= a[i])
      j = i;
  }
  return j;
}
int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d ", &a[i]);
  }
  int r = max_id(n, a) + (n - min_id(n, a) - 1);
  if (max_id(n, a) > min_id(n, a))
    r--;
  printf("%d", r);
}
