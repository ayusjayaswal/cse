#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,N) for(int i = 0; i < N; ++i)

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n;
  cin >> n;
  int a[n][n];
  fi(i,n){
    fi(j, n){
      cin >> a[i][j];
    }
  }
  fi(i, n){
    fi(j, n){
      if(a[i][j]==1){
	cout << j+1 << " ";
      }
    }
      cout << "\n";
  }
  
}
