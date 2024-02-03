#include <bits/stdc++.h>
using namespace std;

int main() {
  long int n;
  cin >> n;
  if (n < 4 && n >1) {
    cout << "NO SOLUTION"
         << "\n";
    return 0;
  }
  vector<int> a;
  vector<int> b;
  for (int i = 1; i < n + 1; ++i) {
    i & 1 ? a.push_back(i) : b.push_back(i);
  }
  for(auto i:b){
cout << i << " ";
  }
  for(auto i:a){
cout << i << " ";
  }
}
