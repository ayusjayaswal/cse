#include "stdio.h"
int main(){
  int n;
  scanf("%d",&n);
  int m[n];
  int count =1;
  for(int i =0;i<n;i++){
    scanf("%d",&m[i]);
  }
  for(int i = 1;i<n;i++){
    if(m[i]!=m[i-1])
      count++;
  }
  printf("%d",count);
}
