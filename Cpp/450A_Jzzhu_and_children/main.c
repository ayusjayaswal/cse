#include <stdio.h>

int foo(int a,int m){
  if(a%m==0) return a/m;
  else return a/m+1;
}
int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  int a[n];
 for (int i = 0; i<n; ++i) {
   scanf("%d",&a[i]);
 }

  //solve
  int ans=0;
  for(int i=0;i<n;++i){
    if(foo(a[i],m)>=foo(a[ans],m))ans=i;
  }
  printf("%d",ans+1);

}
