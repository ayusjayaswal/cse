#include <bits/stdc++.h>
using namespace std;

int vesyacount(vector<int> v,int q){
  int count =0;
  for(int i=0;i<v.size();++i){
    if(v.at(i)==q)break;
    else count++;
  }
  return count;
}

int petyacount(vector<int> v,int q){
  int count =0;
  for(int i=v.size()-1;i<=0;--i){
    if(v.at(i)==q)break;
    else count++;
  }
  return count;
}

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &i:a){
    cin >> i;
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for(auto &i:b){
    cin >> i;
  }
cout << vesyacount(a, int q), int q) << "\n";

}
