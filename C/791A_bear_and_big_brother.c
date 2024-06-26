#include "stdio.h"
int main() {
  int a, b, tmp;
  scanf("%d %d", &a, &b);
  for (int i = 1; i <= 7; i++) {
    tmp = a - b;
    if (tmp > 0){
      printf("%d", i-1);
      break;}
    a = a * 3;
    b = b * 2;
  }
}
