#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(int i = 0; i < N; ++i)

void solve(){
  int n;
  cin >> n;
  vector<ll> a(n);
  getvec(a);

  vector<ll> v(n,0);
  
  ll mx = 0;
  fi(i, n){
    mx = max(a[i],mx);
    if(a[i]<mx){
      v[i] = (mx-a[i]);
    }
  }

  multiset<ll> w;
  fi(i,n){
    if(v[i]!=0){
      w.insert(v[i]);
    }
  }
  vector<ll> x(all(w));
  ll mn = x.size();
  ll tmp = 0;
  ll ans = 0;
  fi(i,mn){
    ans+=(x[i]-tmp)*(mn-i+1);
    tmp = x[i];
  }
  cout << ans << "\n";

}


int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
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
