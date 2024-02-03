#include <bits/stdc++.h>
using namespace std;
vector<int> subset;
void search(int k,int n){
  if(k==n){
    //
  }
  else{
    search(k+1,n);
    subset.push_back(k);
    search(k+1,n);
    subset.pop_back();
  }
}
int main(){
  
}
