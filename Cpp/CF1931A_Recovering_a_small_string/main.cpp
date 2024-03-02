#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)

void solve() {
  int n;
  cin >> n;

  deque<char> s;
  if (n <= 26) {
    s.push_front((char)('a' + n - 3));
    s.push_front('a');
    s.push_front('a');
  } else if (n <= 26 * 2) {
    if (n == 27) {
      s.push_front('y');
      s.push_front('a');
      s.push_front('a');
    }
    else{
    s.push_front('z');
    n -= 26;
    s.push_front((char)('a' + n - 2));
    s.push_front('a');
    }
  } else if (n <= 26 * 3) {

    s.push_front('z');
    n -= 26;
    s.push_front('z');
    n -= 26;
    s.push_front((char)('a' + n - 1));
  }
  cout << s[0] << s[1] << s[2] << "\n";
  ;
}

int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
