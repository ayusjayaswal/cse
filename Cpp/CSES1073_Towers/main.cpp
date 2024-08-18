#include <bits/stdc++.h>
#include <iostream>
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
  vector<int> a;
  fi(i, n){
    int x;
    cin >> x;
    int lo = 0;int hi  = a.size();
    while (lo<hi) {
      int mid = (lo+hi)/2;
      if(a[mid]>x)hi = mid;
      else lo = mid+1;
	}
    if(lo == a.size())a.push_back(x);
    else a[lo] = x;
  }
  cout << a.size() << "\n";

}
