#include <stdio.h>
int bin_search(int hay[],int n,int needle){
  int l = 0;
  int r = n-1;
  while(l<r){
  int mid = l+(r-l)/2;
    if(hay[mid] >= needle){
      r = mid;
    }else{
      l = mid + 1;
    }
  }
  return l;
}
int main(){
  int hay[] = {1,2,4,5,6,7,8,9,11,13,15,16,17,19};
  printf("%d",bin_search(hay,14,13));
}
