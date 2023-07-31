#include "stdio.h"
#define ar_domino 2

int main(){
  float l,m,n;
  scanf("%f %f",&l,&m);
  n = (l*m)/ar_domino;
  printf("%d",((int) n));
  
}
