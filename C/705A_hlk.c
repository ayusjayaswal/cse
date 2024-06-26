#include "stdio.h"
int main(){
  int n;
  scanf("%d",&n);
  printf("I hate ");
  if(n>1){
    for(int i = 1;i<n;i++){
      if(i%2==1)
	printf("that I love ");
      else
	printf("that I hate ");

    }
  }
  printf("it");
  return 0;
}
