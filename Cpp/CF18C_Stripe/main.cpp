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
  getvec(a);

  vector<pair<int,int>> o(n);
  ll sum = 0;
  fi(i,n){
    sum+=a[i];
    o[i].first = sum;
  }
  fi(i,n){
    o[i].second = sum;
    sum-=a[i];
  }
  ll count = 0;
  fi(i,n-1){
    if(o[i].first==o[i+1].second){
      count++;
    }
  }
  cout << count << "\n";

}
