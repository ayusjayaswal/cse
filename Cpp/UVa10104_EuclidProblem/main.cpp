#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(int i = 0; i < N; ++i)

void solve(){
  ll a,b;
  cin >> a >> b;
  ll x,y;
  (a<b)?(x=0,y=1):(x=1,y=0);
  ll g = gcd(a, b);
  ll sum = a*x+b*y;
  while(sum!=g){
    if(sum > g)
  }
  
  
}

int main(){
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifdef ONLINE_JUDGE
  std::cerr.rdbuf(nullptr);
#endif
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
