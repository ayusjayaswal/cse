#include "stdio.h"
int main(){
  int n,test;
  test = 1;
  scanf("%d",&n);
  int a[n];
  for(int i =0;i<n;i++){
    scanf("%d ",&a[i]);
    if(a[i]==1)
      test = 0;
  }
  printf("\n");
  if(test){
    printf("EASY");
  }
  else
    printf("HARD");
}
