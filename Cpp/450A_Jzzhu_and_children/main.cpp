#include <bits/stdc++.h>
#include <vector>
using namespace std;

int foo(int a,int m){
  if(a%m==0) return a/m;
  else return a/m+1;
}
int main(){
  int n,m;
  cin >> n>>m;
  vector<int> a(n);
  for(auto&i:a){
    cin >> i;
  }

  //solve
  int ans=0;
  for(int i=0;i<a.size();++i){
    if(foo(a[i],m)>=foo(a[ans],m))ans=i;
  }
  cout << ans+1 << "\n";

}
