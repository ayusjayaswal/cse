#include "stdio.h"
int test(int n) {
  int r[4];
  for (int i = 0; i < 4; i++) {
    r[i] = n % 10;
    n = n / 10;
  }
  int out = 1;
  for(int i = 0; i<4;i++){
    for(int j = i+1;j<4;j++){
      if(r[i]==r[j]){
	out = 0;
	break;
      }
    }
  }
  return out;
}


int main() {
  int y;
  scanf("%d", &y);
  while(!test(y+1)){
    y++;
  }
  printf("%d",y+1);
}
