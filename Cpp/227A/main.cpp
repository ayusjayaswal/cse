#include <bits/stdc++.h>
using namespace std;

int fo(int tsum,int n){
  return tsum % (n+1);
}

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for(auto &i:a){
    cin >> i;
    sum+=i;
  }
  int ans=0;
  for(int i =1;i<6;i++){
    if(fo(sum+i,n)!=1)ans++;
  }
  cout << ans << "\n";

  
}
