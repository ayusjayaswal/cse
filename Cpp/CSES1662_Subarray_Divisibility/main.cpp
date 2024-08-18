#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(int i = 0; i < N; ++i)

int main(){
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifdef ONLINE_JUDGE
  std::cerr.rdbuf(nullptr);
#endif
  int n;
  cin >> n;
  vector<ll> a(n);
  for(auto&i:a){
    cin >> i;
  }

  map<ll , ll> mod_count;
  mod_count[0] = 1; // To handle subarrays starting from index 0
  ll sum = 0;
  ll cnt = 0;
  
  fi(r, n){
    sum += a[r];
    ll mod = ((sum % n) + n) % n;  // Ensure mod is non-negative
    cnt += mod_count[mod];         // Count how many times this mod has occurred
    mod_count[mod]++;              // Increment the count of this mod
  }

  cout << cnt << "\n";
}
