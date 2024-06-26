#include "stdio.h"
int main() {
  int n[4];
  int count = 0;
  scanf("%d %d %d %d", &n[0], &n[1], &n[2], &n[3]);
  for (int i = 0; i < 4; i++) {
      printf("ni:%d\n",n[i]);
    for(int j = i+1; j < 4;j++) {
      if(n[i]==n[j])
	count++;
      printf("nj:%d\n",n[j]);
      printf("count:%d\n",count);
    }
  }
  printf("%d", count-1);
}
