#include <stdio.h>

void shift(int n, char s[]) {
  for (int g = 1; g < n; g++) {
    if (s[g] == 'G' && s[g - 1] == 'B') {
      s[g] = 'B';
      s[g - 1] = 'G';
      g++;  // Skip the next character since it has already been processed
    }
  }
}

int main() {
  int n, t;
  scanf("%d %d", &n, &t);
  char s[n + 1];  // Add 1 to the array size for the null terminator
  scanf("%s", s);

  for (int i = 0; i < t; i++) {
    shift(n, s);
  }

  printf("%s\n", s);  // Print the final string
  return 0;
}
