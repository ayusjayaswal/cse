#include "stdio.h"
int main(){
  int n,h;
  int l = 0;
  scanf("%d %d",&n,&h);
  int a[n];
  for(int i = 0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]>h)
      l+=2;
    else
      l++;
  }
  printf("%d",l);
}
