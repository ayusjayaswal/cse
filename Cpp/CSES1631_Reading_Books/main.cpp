#include <bits/stdc++.h>
#include <vector>
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
  ll n;
  cin >> n;
  ll maxm = 0;
  ll sum = 0;
  ll x;
  fi(i, n){
    cin >> x;
    maxm = max(maxm,x);
    sum += x;
  }
  if(maxm >= sum-maxm){cout << 2*maxm << "\n";
  }else{
    cout << sum << "\n";

  }
}
