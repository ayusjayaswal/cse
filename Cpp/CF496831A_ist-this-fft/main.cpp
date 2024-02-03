#include <bits/stdc++.h>
using namespace std;
int mod(char *s){
  unsigned long long x=0;
  for(int i = 0;s[i]!='\0';++i){
    x=(x*10+s[i]-'0')%1000000007;
  }
  return x;
}
void solve(){
  int n;
  cin >> n;
  char s[n];
  for(int i = 0;i<n;++i){
    s[i]='3';
  }
  s[n]='\0';
  cout << mod(s) << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
