#include "stdio.h"
int main(){
  int n;
  scanf("%d",&n);
  int p[n],q[n];
  int count = 0;
  for(int i = 0;i<n;i++){
    scanf("%d %d",&p[i],&q[i]);
    if((q[i]-p[i])>=2)
      count++;
  }
  printf("%d\n",count);
}
