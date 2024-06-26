#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  vector<int> f(26, 0);
  for (auto i : a) {
    for(int j =0;j<26;++j){
      if(f[j]==i){
	//cout <<"for i:"<<i<<" f["<<j<<"] :"<< (char)('a'+j) << " \n ";
	cout << (char)('a'+j);
	f[j]++;
	break;
      }
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
