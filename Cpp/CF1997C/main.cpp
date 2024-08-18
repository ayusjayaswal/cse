#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(int i = 0; i < N; i+=2)
int calculateCost(const string& s) {
    stack<int> st;
    int cost = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            if (!st.empty()) {
                int j = st.top();
                st.pop();
                cost += (i - j);
            }
        }
    }
    return cost;
}
void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  string out;
  char nxt = '(';
  fi(i, n){
    out+=nxt;
    out+=s[i+1];
    if(s[i+1]=='('){nxt = ')';}
    else{nxt = '(';}
  }
  // cout << out << " :";
  cout << calculateCost(out) << "\n";


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
