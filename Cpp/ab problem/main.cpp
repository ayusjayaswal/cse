#include <bits/stdc++.h>
#include <string>
#include <utility>
using namespace std;

int main(){
  int n;
  cin >> n;
  string s,t;
  cin >> s;
  cin >> t;
  vector<int> diff;
  for(int i = 0;i<n;i++){
    if(s[i]!=t[i]){
      diff.push_back(i);
    }
  }
  int count = 0;
  for(auto i:diff){
    if((t[i]=='B'&&t[i-1]=='A')||(t[i]=='A'&&t[i+1]=='B'))
      count++;
  }

   if(diff.size()&1)count = -1; 
  // for(long unsigned int i = 0;i<diff.size(); i++){
  //   if((i&1)&&(diff[i].second!='B')){
  //     count=-1;
  //   }
  //   if(!(i&1)&&(diff[i].second!='A')){
  //     count=-1;
  //   }
  // }
  cout << count << "\n";

}
