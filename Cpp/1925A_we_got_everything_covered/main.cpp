#include <bits/stdc++.h>
using namespace std;

int foo(){
  
}

int main(){
  int t;
  cin >> t;

  while(t--){
    int n,k;
    cin >> n>>k;
    string s;
    for(int i =0;i<n;i++){
      for(int j = 'a';j<'a'+k;j++){
	s+=j;
      }
    }

    cout << s << "\n";

  }
}
