#include <algorithm>
#include <bits/stdc++.h>
#include <tuple>
using namespace std;

#define ll long long int
#define all(v) v.begin(), v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i, N) for(int i = 0; i < N; ++i)

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<tuple<int, int, int>> a(n);

    // Reading the input into the vector a
    fi(i, n) {
        int tmp;
        cin >> tmp;
        a[i] = make_tuple(tmp, i, 0);
    }

    // Sorting based on the first element of the tuple
    sort(all(a));

    // Distributing the k among the tuples
    for (int i = 0; i < n && k > 0; ++i) {
        get<2>(a[i]) = min(m, k);
        k -= get<2>(a[i]);
    }

    // Sorting back based on the original indices
    sort(all(a), [](tuple<int, int, int> x, tuple<int, int, int> y) {
        return get<1>(x) < get<1>(y);
    });

    ll rise = 0;
    ll cost = 0;
    fi(i, n) {
        cost += (get<0>(a[i]) + rise) * get<2>(a[i]);
        rise += get<2>(a[i]);
    }

    cout << cost << "\n";
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
