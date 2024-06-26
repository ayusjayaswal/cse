#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,N) for(int i = 0; i < N; ++i)

void solve(){
  int n;
  cin >> n;
  vector<char> a(n);
  for(auto &i:a){
    cin >> i;
  }
  int c = 0;
  fi(i, n){
    if(a[i]=='@'){
      c++;
    }
    else if(a[i]=='*' && a[i+1]=='*'){
      break;
    }
  }
  cout << c << "\n";

}

int main(){
  // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
