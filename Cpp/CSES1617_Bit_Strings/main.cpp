#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,N) for(ll i = 0; i < N; ++i)

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  ll n;
  cin >> n;
  ll m =pow(10,9)+7;
  ll ans =1;
  fi(i,n){
    ans*=2%m;
  }
  ans%=m;
  cout << ans << "\n";

}
