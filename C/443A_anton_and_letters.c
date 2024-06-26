#include "stdio.h"
int main() {
  char s[1000];
  int n = 0;
  int d = 0;
  scanf("%[^\n]s", s);
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] != '{' && s[i] != ',' && s[i] != '}' && s[i] != ' ') {
      n++;

      for (int j = 0; j < i; j++) {
        if (s[i] == s[j]) {
          d++;
          s[j] = ' ';
        }
      }
    }
    /* printf("@ i: %d  n=%d d=%d\n", i, n, d); */
  }
  printf("%d", n - d);
}
