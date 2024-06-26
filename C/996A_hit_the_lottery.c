#include "stdio.h"
int main(){
  int n;int count = 0;
  scanf("%d",&n);
  int c[]={100,20,10,5,1};
  for(int i = 0;i<5;i++){
    count+=n/c[i];
    n=n%c[i];
  }
  printf("%d",count);
}
