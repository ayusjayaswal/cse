#include "stdio.h"
int main(){
  int n;
  scanf("%d",&n);
  float p[n];
  float sum = 0;
  for(int i = 0;i<n;i++){
    scanf("%f ",&p[i]);
    sum+=p[i];
  }
  printf("%.12f",sum/n);
}
