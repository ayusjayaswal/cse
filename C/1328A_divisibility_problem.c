#include "stdio.h"
void div(int a[],int b[]){
  int i=(*a)/(*b);
  while((*b)*i<(*a)){
    i++;
  }
  printf("%d\n",((*b)*i-(*a)));
}
int main (){
  int t;
  scanf("%d",&t);
  int a[t],b[t];
  for(int i = 0;i<t;i++){
    scanf("%d %d",&a[i],&b[i]);
  }
  for(int i = 0;i<t;i++){
    div(&a[i],&b[i]);
  }
}
