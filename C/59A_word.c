#include "stdio.h"
int count_upper(char s[100]) {
  int cu = 0;
  for (int i = 0; i < 100; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
      cu++;
  }
  return cu;
}
int count_lower(char s[100]) {
  int c=0;
  for (int i = 0; i < 100; i++) {
    if (s[i] >= 'a' && s[i] <= 'z')
      c++;
  }
  return c;
}
int main() {
  char s[100];
  scanf("%s", s);
  if (count_lower(s) >= count_upper(s)) {
    for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] >= 'A' && s[i] <= 'Z') {
	s[i] = s[i] + 32;
      }
    }
  }
  if(count_lower(s) < count_upper(s)) {
    
    for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] >= 'a' && s[i] <= 'z') {
	s[i] = s[i] - 32;
      }
    }
  }
  printf("%s", s);
}
