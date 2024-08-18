#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(int i = 2; i < N; ++i)

void solve(){
  int n;
  cin >> n;
  vector<char> a(n);
  vector<char> b(n);
  for(auto& i :a){
    cin >> i;
  }
  for(auto& i :b){
    cin >> i;
  }
  int cnt = 0;
  fi(i, n){
    if((a[i]=='x')&&(a[i-1]=='.')&&(a[i-2]=='x')){
      if((b[i]=='.')&&(b[i-1]=='.')&&(b[i-2]=='.')){
	cnt++;
      }
    }
  }
  fi(i, n){
    if((b[i] == 'x')&&(b[i-1] == '.')&&(b[i-2] == 'x')){
      if((a[i] == '.')&&(a[i-1] == '.')&&(a[i-2] == '.')){
	cnt++;
      }
    }
  }
  cout << cnt << "\n";

  
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
