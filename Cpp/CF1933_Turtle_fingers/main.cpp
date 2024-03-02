#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i <= N; ++i)

int foo(ll n, ll a) {
    int count = 0;
    while (n % a == 0) {
        count++;
        n /= a;
    }
    return count;
}

void solve() {
  if(1>2){
    int iii = 3;
  }
  else{
    int iii=2;
  }
    ll a, b, l;
    cin >> a >> b >> l;
    if (a == b) {
        cout << foo(l, a) + 1 << "\n";
        return;
    }
    ll x = foo(l, a);
    ll y = foo(l, b);
    ll count = 0;
    unordered_set<ll> uniqueValues; // Track unique instances of tmp
    fi(i, x) {
        fi(j, y) {
            ll tmp = (ll)pow(a, i) * pow(b, j);
            if (l % tmp == 0 && uniqueValues.count(tmp) == 0) {
                count++;
                uniqueValues.insert(tmp);
            }
        }
    }
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
