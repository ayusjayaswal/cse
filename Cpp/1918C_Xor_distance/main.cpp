
#include <bits/stdc++.h>
using namespace std;

long long foo(int a, int b, int x){
  long long c = (a^x)-(b^x);
  return abs(c);
}

int main(){
  int t;
  cin >> t;
  while(t--){
    long long a, b, r;
    cin >> a >> b >> r;
    
    long long ans = INT_MAX; // Initialize ans to a large value
    
    for(int x = 0; x <= r; x++){
      ans = min(ans, foo(a, b, x));
    }
  
    cout << ans << "\n";
  }
  
  return 0;
}
