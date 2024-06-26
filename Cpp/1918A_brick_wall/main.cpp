#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,m;
    cin >> n>>m;
    int ans =0;
    if(m&1){
      ans = ((m-1)/2)*n;
    }
    else{
      ans =(m/2)*n;
    }
    cout << ans << "\n";

  }
}

