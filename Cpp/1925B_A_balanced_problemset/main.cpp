#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--) {
    int x,n;
    cin >> x>>n;
    int ans=1;
    for(int i =1;((x/i)>n)&&((x%i)==0);i++){
      
      ans=i;
    }
    cout << ans << "\n";

  }
}
