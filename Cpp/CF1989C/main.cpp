#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(int i = 0; i < N; ++i)

void solve(){
  int n;
  cin >> n;
  vector<pair<int,int>> a(n);
  vector<pair<int,int>> later;
  fi(i, n){
    int x;
    cin >> x;
    a[i].first=x;
  }
  fi(i, n){
    int x;
    cin >> x;
    a[i].second=x;
  }

  ll one = 0;
  ll two = 0;

  fi(i,n){
    if(a[i].first>a[i].second){one+=a[i].first;}
    if(a[i].second>a[i].first){two+=a[i].second;}
    if(a[i].first==a[i].second){
      later.push_back(a[i]);
    }
  }
  fi(i, later.size()){
      if (later[i].first == 1) {
        (one > two) ? two++ : one++;
      }
      if (later[i].first == -1) {
        (one > two) ? one-- : two--;
      }
  }
  cout << min(one,two) << "\n";


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
