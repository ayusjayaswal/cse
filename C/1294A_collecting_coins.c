#include "stdio.h"
int max_of_three(int x, int y, int z) {
  int a = x;
  if (y > a)
    a = y;
  if (z > a)
    a = z;
  return a;
}
int main() {
  int t, k, sum;
  scanf("%d", &t);
  int x[t][4];
  for (int j = 0; j < t; j++)
    scanf("%d %d %d %d", &x[j][0], &x[j][1], &x[j][2], &x[j][3]);
  for (int i = 0; i < t; i++) {
    sum = x[i][0] + x[i][1] + x[i][2] + x[i][3];
    k = sum / 3;
    if ((sum % 3 == 0) && k >= max_of_three(x[i][0], x[i][1], x[i][2]))
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}
