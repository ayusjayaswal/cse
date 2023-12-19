#include "stdio.h"
int min(int a, int b) {
  int min;
  a > b ? (min = b) : (min = a);
  return min;
}
int netpoint(int i, int j, char m[i][j]) {
  int score = 0;
  for (int x = 0; x < i; x++) {
    for (int y = 0; y < j; y++) {
      int pt;

      /* (min(x, y) >= min(10 - x, 10 - y)) ? (pt = min(10 - x, 10 - y)) */
      /*                                    : (pt = min(x, y) + 1); */
      pt = min(min(x+1,y+1),min(10-x,10-y));
      (m[x][y] == 'X') ? (score += pt) : x;

      /* printf("score at %d,%d with reward %d: %d\n", x, y, pt, score); */
    }
  }
  return score;
}
int main() {
  int t;
  scanf("%d", &t);
  int ans[t];
  for (int i = 0; i < t; i++) {
    char m[10][10];
    for (int j = 0; j < 10; j++) {
      scanf("%s", m[j]);
    }
    ans[i] = netpoint(10, 10, m);
  }
  for (int i = 0; i < t; i++) {
    printf("%d\n", ans[i]);
  }
}
