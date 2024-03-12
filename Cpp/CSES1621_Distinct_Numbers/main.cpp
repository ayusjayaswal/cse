#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
#define fi(i,N) for(int i = 0; i < N; ++i)

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n;
  cin >> n;
  set<int> s;
  while (n--) {
    int x;
    cin >> x;
    s.insert(x);
      }
  cout << s.size() << "\n";

}
