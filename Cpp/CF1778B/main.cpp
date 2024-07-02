#include <climits>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long int
#define all(v) v.begin(), v.end()
#define getvec(v) for (auto &i : v) { cin >> i; }
#define fi(i, N) for (int i = 0; i < N; ++i)

void solve() {
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> p(n);
    vector<int> a(m);
    getvec(p);
    getvec(a);
    const int INT_MAX1= 1e9;
    vector<int> pos(n + 1);
    fi(i, n) {
        pos[p[i]] = i;
    }

 int ans = 1e9;
 
        for(int i = 1; i < m; i++) {
            if(pos[a[i+1]] <= pos[a[i]] || pos[a[i+1]]-pos[a[i]] > d) {
                ans = 0;
                break;
            }
 
            ans = min(ans, pos[a[i+1]] - pos[a[i]]);
 
            int dist = pos[a[i+1]]-pos[a[i]];
 
            int swapNeed = d-dist+1;
            int swapPossible = (pos[a[i]]-1) + (n - pos[a[i+1]]);
            if(swapPossible >= swapNeed) ans = min(ans, swapNeed);
        }
cout << ans << "\n";

}

int main() {
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    #ifdef ONLINE_JUDGE
    std::cerr.rdbuf(nullptr);
    #endif
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
