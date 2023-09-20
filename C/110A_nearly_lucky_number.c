#include "stdio.h"
int main() {
  char n[18];
  int c = 0;
  scanf("%s", n);
  for (int i = 0; n[i] != '\0'; i++) {
    if (n[i] == '4' || n[i] == '7')
      c++;
  }
  int j = c;
  int r;
  int flag = 1;
  while (c != 0) {
    r = c % 10;
    c = c / 10;
    if (r != 4 && r != 7) {
      flag = 0;
      break;
    }
  }
  if (flag && j != 0)
    printf("YES");
  else
    printf("NO");
  return 0;
}
