#include "stdio.h"
int main(){
  int n;
  scanf("%d",&n);
  int a[n];

  for(int i = 0 ; i<n;i++){
    scanf(" %d",&a[i]);
  }
 
  for(int i = 0 ; i<n;i++){
    printf("%d ",a[i]);
  }
  for(int i = 0 ; i < n; i++){
    int min = i;
    for(int j = i; j< n;j++){
      if(a[j]<a[min]){min = j;}
    }

    if (min != i){
      int tmp = a[i];
      a[i]=a[min];
      a[min]=tmp;
    }
  }
  printf("\n\n");
  for(int i = 0 ; i<n;i++){
    printf("%d ",a[i]);
  }
}
