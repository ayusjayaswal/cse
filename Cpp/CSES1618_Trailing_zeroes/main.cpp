#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,N) for(int i = 0; i < N; ++i)

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  ll n;
  cin >> n;
  ll ans = 0;
  for(ll i = 5;n/i!=0;i*=5){
    ans+=n/i;
  }
  cout << ans << "\n";

}
