#include "stdio.h"
int main(){
  int n;
  scanf("%d",&n);
  int a[n+1];int b[n+1];
  for(int i = 0;i<n+1;i++)
    b[i]=0;
  a[0]=0;
  for(int i = 1;i<n+1;i++){
    scanf("%d ",&a[i]);
    b[a[i]]=i;
  }
  for(int i = 1;i<n+1;i++)
    printf("%d ",b[i]);
}
