#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define all(v) v.begin(),v.end()
#define getvec(v) for(auto &i: v){cin >> i;}
#define fi(i,N) for(int i = 1; i < N; ++i)

void solve(){
    string s;
    cin >> s;
    string out;
    bool flag = true;
    bool sf = true;

    out += s[0]; // Add the first character to the output

    fi(i, s.size()){
        if(s[i] == s[i-1] && sf){
            flag = false;
	    sf = false;
            if(s[i] != 'z') out += s[i] + 1;
            else out += 'a'; // Wrap around to 'a' if character is 'z'
        } 
            out += s[i];
        
    }

    if(flag){
        if(out.back() != 'z') out += out.back() + 1;
        else out += 'a'; // Wrap around to 'a' if character is 'z'
    }

    cout << out << "\n";
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
