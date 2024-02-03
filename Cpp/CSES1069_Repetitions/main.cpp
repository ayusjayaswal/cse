#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int c = 1;
  int cm = 1;
  for (int i = 1; i < s.size(); ++i) {
    if (s[i] == s[i - 1]) {
      c++;
    } else {
      c = 1;
    }
    cm = max(cm, c);
  }
  cout << cm << "\n";
}
