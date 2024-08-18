#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(ll i = 0; i < N; ++i)

bool foo(vector<ll> a,ll mx,ll k){
  ll sm = 0;
  ll cnt = 1;
  fi(i, a.size()){
    if(a[i]>mx)return false;
    sm+=a[i];
    if(sm>mx){cnt++;sm = a[i];}
  }
  return (cnt <=k);
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifdef ONLINE_JUDGE
  std::cerr.rdbuf(nullptr);
#endif
  ll n,k;
  cin >> n >> k;
  vector<ll> a(n);
  for(auto &i:a){
    cin >> i;
  }
  ll l = 0;
  ll r = 1e18;
  while(l<r){
    ll mid = l - (l - r)/2;
    if(foo(a, mid, k)){
      r = mid;
    }else{
      l = mid + 1;
    }
  }
  cout << l << "\n";

}
