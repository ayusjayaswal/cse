

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(ll i = 0; i < N; ++i)

void solve() {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
	ll mx = 0;
	// for(int i = n-2;i>=0;--i){
	fi(i,n){
	  //set height jo elapsed pr ho h[i] ki
	  // h[i] = max(h[i],h[i+1]+1);
	  mx = max(mx,(h[i]+i));
	}
	// cout << h[0] << "\n";
	cout << mx << "\n";

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
