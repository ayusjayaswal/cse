#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)

int pos(int x,int dist,char d,int n,set<int> &ansset){
  int ans;
  if(d=='1'){
    ans = (x+dist)%n;
  }
  else if(d=='0'){
    ans = abs(x-dist)%n;
  }
  else{
    ansset.insert((x+dist)%n);
    ansset.insert(abs(x-dist)%n);
  }
  return ans;
}

void solve(){
  int n,m,x;
  cin >> n>>m>>x;
  set<int> s[m];
}

int main(){
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
