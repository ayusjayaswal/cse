#include "stdio.h"
int main() {
  int n;
  int ac = 0, dc = 0;
  scanf("%d", &n);
  char s[n];
  scanf("%s", s);
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A')
      ac++;
    else if (s[i] == 'D')
      dc++;
  }
  if(ac>dc)
    printf("Anton\n");
  else if (dc>ac)
    printf("Danik\n");
  else
    printf("Friendship\n");
  
}
