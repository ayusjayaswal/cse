#include "stdio.h"
int main(){
  long long n;
  scanf("%lld",&n);
  long long v[n];
  long long sum = 0;
  for(long long int i = 1;i<n+1;i++){
    v[i]=i;
    if(i%2==1)
      v[i]=-1*v[i];
    sum+=v[i];
  }
  printf("%lld",sum);
}
