#include "stdio.h"
#include <complex.h>
int main() {
  int n, p, q;
  scanf("%d", &n);

  char r[n];
  for (int i = 0; i < n; i++)
    r[i] = 'F';

  scanf("%d", &p);
  int x[p];
  for (int i = 0; i < p; i++) {
    scanf("%d ", &x[i]);
    r[x[i] - 1] = 'P';
    /* printf("%d %c |",i,r[i]); */
  }
  scanf("%d", &q);
  int y[p];
  for (int i = 0; i < q; i++) {
    scanf("%d ", &y[i]);
    r[y[i] - 1] = 'P';
  }
  int flag = 1;
  for (int i = 0; i < n; i++) {
    /* printf("i:%d %c\n",i,r[i]); */
    if (r[i] == 'F')
    flag = 0;
  }
  if(flag)
    printf("I become the guy.");
  else
    printf("Oh, my keyboard!");
}
