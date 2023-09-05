#include "stdio.h"
int main() {
  int k, n, w;
  scanf("%d %d %d", &k, &n, &w);
  int tmp = k * ((w * (w + 1)) / 2) - n;
  if(tmp>=0)
    printf("%d",tmp);
  else
    printf("0");
}
