
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(int i = 0; i < N; ++i)

void processVector(std::vector<int>& vec) {
    int counter = 0;

    // Loop until the first element is made zero
    while (true) {
        int curr = 0;
        int currIndex = -1;

        // Find the last non-zero element
        for (int i = vec.size() - 1; i >= 0; --i) {
            if (vec[i] != 0) {
                curr = vec[i];
                currIndex = i;
                break;
            }
        }

        // If no non-zero element is found, break the loop
        if (currIndex == -1) {
            break;
        }

        // Add curr to the counter
        counter += curr;

        // Make the element at currIndex zero
        vec[currIndex] = 0;

        // Update elements before currIndex
	ll cnt = 0;
        for (int i = currIndex-1; i > -1; --i) {
	  if(vec[i] == (vec[i+1] + curr - cnt)){cnt++;}
	  else{cnt = 0;}
	  if (vec[i] > curr) {
	    vec[i] -= (curr - cnt);
            }
        }
	for(auto i:vec){
	  cerr<<i<<" ";
	}
	cerr<<'\n';
    }

    // Print the counter
    std::cout << counter << std::endl;
}
void solve() {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
	processVector(h);
	
}

int main(){
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifdef ONLINE_JUDGE
  std::cerr.rdbuf(nullptr);
#endif
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
